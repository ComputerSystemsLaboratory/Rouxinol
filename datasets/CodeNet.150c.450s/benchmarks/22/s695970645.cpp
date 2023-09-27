/**
 * @brief  最短経路問題(shortest paths problem)におけるBellman-Fordアルゴリズム(Bellman-Ford algorithm)を扱う
 * @date   作成日     : 2016/02/18
 * @date   最終更新日 : 2016/02/18
 */



//****************************************
// 必要なヘッダファイルのインクルード
//****************************************

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <tuple>



//****************************************
// 構造体の定義
//****************************************

using weight_t = std::int32_t;  /**< 辺(u, v)への重みwを表す型 */
using index_t  = std::int32_t;  /**< 頂点vの添字を表す型       */

/**
 * @brief  頂点色列挙構造体(scoped enum)
 * @detail (u, v) ∈ Eで頂点uが黒ならば頂点vは灰か黒である
 *         すなわち、黒頂点に隣接する全ての頂点は発見済みである
 *         灰頂点は白頂点に隣接することがあり、これらの頂点が既発見頂点と未発見頂点の境界をなす
 */
enum struct color : std::int32_t {
    white,  /**< 未発見頂点 */
    black,  /**< 既発見頂点 */
    gray,   /**< 既見済頂点 */
};

/**
 * @brief グラフ用ノード(頂点) 
 */
struct vertex {
    // index_t index;        /**< 頂点の添字      */
    weight_t d;           /**< 始点sからの距離  */
    index_t pi;           /**< 先行頂点(の添字) */
    union {
        color _color;      /**< 頂点の色        */
        bool  visited;    /**< 発見済みか?     */
    };
    union {
        weight_t f;           /**< 時刻印(DFSにおいて、黒色に彩色されたとき、刻まれる)     */
        weight_t key;         /**< Primのアルゴリズムにおいて木に属するある頂点とを結ぶ重み */
    };
    vertex() : /*index(0),*/ d(0), pi(0), _color(color::white), f(0) {}
};

/**
 * @brief グラフ用エッジ(辺)
 * @note  G = (V, E)を重み関数wを持つ重み付きグラフとすると、
 *        辺(u, v) ∈ Eの重みはw(u, v)と表される
 */
struct edge {
    index_t  src;   /**< 辺の始点u */
    index_t  dst;   /**< 辺の終点v */
    weight_t w;     /**< 辺(u, v)への重み(コスト) */
    edge() = default;
    edge(index_t src, index_t dst) : src(src), dst(dst), w(1) {}
    edge(index_t src, index_t dst, weight_t w) : src(src), dst(dst), w(w) {}
};


// 宣言と実装をhppとcppでわけないとリンカエラー
// bool operator<(const edge& e, const edge& f)
// {
//     return e.w < f.w;
// }



using edges_t    = std::vector<edge>;      /**< グラフG=(V, E)の辺集合E   */
using vertices_t = std::vector<vertex>;    /**< グラフG=(V, E)の頂点集合V */
using array_t    = std::vector<weight_t>;  /**< 重みwの配列  */
using indices_t  = std::vector<index_t>;   /**< 頂点の添字配列 */
using adjmtx_t   = std::vector<array_t>;   /**< グラフGの隣接行列表現 */
using graph_t    = std::vector<edges_t>;   /**< グラフGの隣接リスト表現(こちらを主に使用する) */



namespace graph {  // グラフ用名前空間...そのうちこのファイルを覆い尽くす予定
    enum {  // namespace graphによってscopedではあるが強く型付けされたenum(strongly-typed enum)ではない
    inf = std::numeric_limits<weight_t>::max() / 3,  /**< @brief 辺が存在しない場合に使用される値     */
    nil = std::numeric_limits<index_t>::min() / 3,   /**< @brief 先行点が存在しない場合に使用される値 */
};
}




//****************************************
// 関数の定義
//****************************************

/**
 * @brief  Bellman-Fordアルゴリズム
 *
 * @note   Bellman-Fordアルゴリズムは負辺の存在を許す一般の単一始点最短路問題を解く
 *         重み関数w: E -> R(Rは実数体)を持つ重み付き有向グラフG= (V, E)と始点sが与えられたとき、
 *         始点から到達可能な負閉路が存在するか否かを示すブール値をBellman-Fordアルゴリズムは返す
 *         アルゴリズムは、このような負閉路が存在すれば解が存在しないと報告し、そうでなければ最短路とその重みを生成する
 *
 * @note   Bellman-Fordアルゴリズムは、辺を次々に緩和することで、始点sから各頂点v ∈ Vへの最短路重みの推定値v.dを
 *         実際の最短路重みδ(s, v)に一致するまで徐々に減らす
 *         アルゴリズムが値TRUEを返すのは、グラフの始点から到達可能な負閉路を含まないとき、かつそのときに限る
 *
 * @note   Bellman-FordアルゴリズムはΟ(VE)時間で走る
 *
 * @param  const graph_t& G グラフG
 * @param  index_t        s 始点s
 */
std::tuple<bool, indices_t, array_t> bellmanford(const graph_t& G, index_t s)
{
#define _foreachbegin(GE, e) for (auto& es : GE) { for (auto& e : es) {
#define _foreachend } }
    
    std::int32_t n = G.size();
    indices_t pi(n); array_t d(n);

    // Θ(V)の手続きによって最短路推定値と先行点を初期化する
    auto initsinglesource = [](indices_t& pi, array_t& d, index_t s, std::int32_t n) -> void {
        for (std::int32_t i = 0; i < n; i++) { d[i]  = graph::inf; pi[i] = graph::nil;}
        d[s] = 0;
    };
    // 辺(u, v)の緩和(relaxing)はuを経由することでvへの既知の最短路が改善できるか否か判定し、改善できるならばv.dとv.πを更新する
    // 緩和によって最短路推定値v.dが減少し、vの先行点属性v.πが更新されることがある. 以下のコードは、辺(u, v)上の緩和をΟ(1)時間で実行する
    auto relax = [](const edge& e, indices_t& pi, array_t& d) ->void {
        index_t v = e.dst, u = e.src;
        if (d[u] != graph::inf && d[v] > d[u] + e.w) { d[v] = d[u] + e.w; pi[v] = u; }
    };

    
    initsinglesource(pi, d, s, n);  // すべての頂点のd値とπ値を初期化する
    // アルゴリズムはグラフのすべての辺を|V| - 1回走査する(ただし、sから到達不可能な負の閉路がない場合に限る)
    for (std::int32_t i = 0; i < n - 1; i++) {
        for (auto& es : G) { for (auto& e : es) {
                relax(e, pi, d);  // グラフの各辺をそれぞれ1回緩和する
            }
        }
    }
    // Gがsから到達可能な負閉路を含まなければ、終了時に、すべての辺(u, v)に対して、
    //   u.d = δ(s, v)
    //      <= δ(s, u) + w(u, v) (∵ 三角不等式)
    //       = u.d + w(u, v)
    // だから、BELLMAN-FORDは値FALSEを返すことはなく、TRUEを返す
    for (auto& es : G) { for (auto& e : es) {               // 負の重みを持つ閉路の有無を判定する
            index_t v = e.dst, u = e.src;
            if (d[u] != graph::inf && d[v] > d[u] + e.w) {  // Gが始点sから到達可能な負閉路を含むとき、
                return std::make_tuple(false, pi, d);       // FALSEを返す
            }
        }
    }
    // Gがsから到達可能な負閉路を含まなければ、値TRUEを返し、すべての頂点v ∈ Vに対してδ(s, v)が成り立ち、
    // 先行点部分グラフGπはsを根とする最短路木である
    return std::make_tuple(true, pi, d);

#undef _foreachbegin
#undef _foreachend
}


int main(void)
{
    using namespace std;
    int V, E, r;
    
    while (cin >> V >> E >> r) {
        graph_t G(V);
        for (int i = 0; i < E; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            G[a].emplace_back(a, b, c);
        }
        auto t = bellmanford(G, r);
        if (get<0>(t)) {
            auto d = get<2>(t);
            for (int i = 0; i < V; i++) {
                if (d[i] > 1000000) { cout <<  "INF"; }
                else                { cout << d[i];   }
                cout << endl;
            }
        }
        else {
            cout << "NEGATIVE CYCLE" << endl;
        }
    }
}