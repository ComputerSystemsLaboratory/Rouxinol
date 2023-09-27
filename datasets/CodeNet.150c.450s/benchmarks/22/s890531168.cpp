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
#include <functional>



//****************************************
// オブジェクト形式マクロの定義
//****************************************

#define GRAPH_BEGIN namespace graph {
#define GRAPH_END   }



//****************************************
// 名前空間の始端
//****************************************

GRAPH_BEGIN



//****************************************
// 構造体の定義
//****************************************

using weight_t   = std::int32_t;  /**< 辺(u, v)への重みwを表す型 */
using index_t    = std::int32_t;  /**< 頂点vの添字を表す型       */
using capacity_t = weight_t;      /**< 辺(u, v)の容量を表す型    */



namespace limits {
    enum {  // scopedではあるが強く型付けされたenum(strongly-typed enum)ではない
        inf = std::numeric_limits<weight_t>::max() / 3,  /**< @brief 辺が存在しない場合に使用される値     */
        nil = std::numeric_limits<index_t>::min() / 3,   /**< @brief 先行点が存在しない場合に使用される値 */
    };
}



/**
 * @brief  頂点色列挙構造体(scoped enum)
 * @detail (u, v) ∈ Eで頂点uが黒ならば頂点vは灰か黒である
 *         すなわち、黒頂点に隣接する全ての頂点は発見済みである
 *         灰頂点は白頂点に隣接することがあり、これらの頂点が既発見頂点と未発見頂点の境界をなす
 */
enum struct vcolor : std::int32_t {
    white,  /**< 未発見頂点 */
    black,  /**< 既発見頂点 */
    gray,   /**< 既見済頂点 */
};

/**
 * @brief グラフ用ノード(頂点) 
 */
struct vertex {
    union {
        weight_t d;       /**< 始点sからの距離  */
        weight_t key;     /**< Primのアルゴリズムにおいて木に属するある頂点とを結ぶ重み */
    };
    index_t pi;           /**< 先行頂点(の添字) */
    union {
        vcolor color;     /**< 頂点の色        */
        bool  visited;    /**< 発見済みか?     */
    };
    // weight_t f;           /**< 終了時刻印(DFSにおいて、黒色に彩色されたとき、刻まれる)     */
    vertex() : d(0), pi(0), color(vcolor::white)/*, f(0)*/ {}
};

/**
 * @brief グラフ用エッジ(辺)
 * @note  G = (V, E)を重み関数wを持つ重み付きグラフとすると、
 *        辺(u, v) ∈ Eの重みはw(u, v)と表される
 */
struct edge {
    index_t  src;   /**< 辺の始点u */
    index_t  dst;   /**< 辺の終点v */
    union {
        weight_t w;     /**< 辺(u, v)への重み(コスト) */
        capacity_t c;   /**< 辺(u, v)の容量 */
    };
    edge() = default;
    edge(index_t src, index_t dst) : src(src), dst(dst), w(1) {}
    edge(index_t src, index_t dst, weight_t w) : src(src), dst(dst), w(w) {}
};



using edges_t    = std::vector<edge>;      /**< グラフG=(V, E)の辺集合E   */
using vertices_t = std::vector<vertex>;    /**< グラフG=(V, E)の頂点集合V */
using array_t    = std::vector<weight_t>;  /**< 重みwの配列  */
using indices_t  = std::vector<index_t>;   /**< 頂点の添字配列 */
using matrix_t   = std::vector<array_t>;   /**< グラフGの隣接行列表現(および表行列表現) */
using graph_t    = std::vector<edges_t>;   /**< グラフGの隣接リスト表現(こちらを主に使用する) */



//****************************************
// 関数の定義
//****************************************

/**
 * @brief  Θ(V)の手続きによって最短路推定値と先行点を初期化する
 * @note   初期化の後、すべてのv ∈ Vについてv.π = NIL、すべてのv ∈ V - {s}についてv.d = ∞である
 */
static void initialize_single_source(vertices_t& V, index_t s)
{
    for (auto& v : V) {
        v.d     = limits::inf;
        v.pi    = limits::nil;
    }
    V[s].d = 0;
}


/**
 * @brief  辺(u, v)の緩和(relaxing)は、uを経由することでvへの既知の最短路を
 *         改善できるか否かを判定し、改善できるならばv.dとv.πを更新する
 *         緩和によって最短路推定値v.dが減少し、vの先行点属性v.πが更新されることがある
 *
 * @note   以下のコードは、辺(u, v)上の緩和をΟ(1)時間で実行する
 *         ただし、手続きpred(V, u)がΟ(1)で実行されることを仮定する
 *
 * @param  vertices_t& V   頂点集合V
 * @param  index_t u       辺(u, v)の始点u (ただし、u ∈ V)
 * @param  index_t v       辺(u, v)の終点v (ただし、v ∈ V)
 * @param  weight_t w      辺(u, v)の重みw
 * @param  Predicate pred  relax可能な前提条件を記述した述語
 */
static void relax(vertices_t& V,
           index_t u, index_t v, weight_t w,
           std::function<bool(const vertices_t&, index_t)> pred)
{
    if (pred(V, u) && V[v].d > V[u].d + w) {
        V[v].d = V[u].d + w;
        V[v].pi = u;
    }
}

// オーバーロードされたrelax関数群

static void relax(vertices_t& V, const edge& e,
           std::function<bool(const vertices_t&, index_t)> pred)
{
    relax(V, e.src, e.dst, e.w, pred);
}
static void relax(vertices_t& V, const matrix_t& W,
           index_t u, index_t v,
           std::function<bool(const vertices_t&, index_t)> pred)
{
    relax(V, u, v, W[u][v], pred);
}



/**
 * @brief  Bellman-Fordアルゴリズム
 *
 * @note   Bellman-Fordアルゴリズムは負辺の存在を許す一般の単一始点最短路問題を解く
 *         重み関数w: E -> Rを持つ重み付き有向グラフG = (V, E)と始点sが与えられたとき、
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
std::pair<bool, vertices_t> bellmanford(const graph_t& G, index_t s)
{   
    std::int32_t n = G.size();
    vertices_t V(n);
    auto relax_pred = [] (const vertices_t& V, index_t u) -> bool { return V[u].d != limits::inf; };

    
    initialize_single_source(V, s);  // すべての頂点のd値とπ値を初期化する
    // アルゴリズムはグラフのすべての辺を|V| - 1回走査する
    for (index_t i = 0; i < n - 1; i++) {
        for (auto& es : G) { for (auto& e : es) {
                relax(V, e, relax_pred);  // グラフの各辺をそれぞれ1回緩和する
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
            if (V[u].d != limits::inf && V[v].d > V[u].d + e.w) {  // Gが始点sから到達可能な負閉路を含むとき、
                return std::make_pair(false, V);       // FALSEを返す
            }
        }
    }
    // Gがsから到達可能な負閉路を含まなければ、値TRUEを返し、すべての頂点v ∈ Vに対してδ(s, v)が成り立ち、
    // 先行点部分グラフGπはsを根とする最短路木である
    return std::make_pair(true, V);
}



//****************************************
// 名前空間の終端
//****************************************

GRAPH_END



//****************************************
// エントリポイント
//****************************************

int main(void)
{
    using namespace std;
    using namespace graph;
    int V, E, r;
    
    while (cin >> V >> E >> r) {
        graph_t G(V);
        for (int i = 0; i < E; i++) {
            int a, b, c;
            cin >> a >> b >> c;
            G[a].emplace_back(a, b, c);
        }
        auto t = bellmanford(G, r);
        if (t.first) {
            for (int i = 0; i < V; i++) {
                if (t.second[i].d > 1000000) { cout <<  "INF"; }
                else                         { cout << t.second[i].d;   }
                cout << endl;
            }
        }
        else {
            cout << "NEGATIVE CYCLE" << endl;
        }
    }
}