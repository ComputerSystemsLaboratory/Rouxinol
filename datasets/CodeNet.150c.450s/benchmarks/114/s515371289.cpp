



//****************************************
// 必要なヘッダファイルのインクルード
//****************************************

#include <utility>
#include <algorithm>
#include <vector>
#include <tuple>
#include <iostream>



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
using array_t    = std::vector<weight_t>;  /**< 重みwの配列 */
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
 * @brief  Primのアルゴリズム
 *
 * @note   Primのアルゴリズムは、グラフの最短路を求めるDijkstraのアルゴリズムとほとんど同じように動作する
 *         Primのアルゴリズムは集合Aの辺が常に1つの木を形成するという性質を持つ. この木は任意の根rから開始し、Vの頂点全体を張るまで成長する
 *         各ステップでは、Aの頂点とある孤立点(Aの辺と接続していない頂点)を連結する軽い辺を木Aに加える
 *         Aに対して安全な辺だけがこの規則によってAに加えられるから、アルゴリズムが終了したとき、Aの辺は最小全域木を形成する
 *         各ステップでは木の重みの増加を限りなく小さく抑える辺を用いて木を成長させるので、これは貪欲戦略である
 *
 * @note   頂点vの属性v.keyはvと木に属するある頂点とを結ぶ辺の最小重みである. ただし、このような辺が存在しなければ、v.key = ∞と定義する
 *         属性v.πは木におけるvの親を示す
 *
 * @note   グラフG = (V, E)が隣接行列によって与えられたとき、Ο(V^2)で走るPrimのアルゴリズムは以下のように実現できる
 * 
 * @param  const adjmtx& M 隣接行列M
 * @param  index_t       r 最小全域木の根
 */
std::pair<vertices_t, weight_t> prim(const adjmtx_t& M, index_t r = 0)
{
    std::int32_t n = M.size();
    vertices_t vs(n); weight_t w;
    auto extractmin = [](const vertices_t& vs, index_t u, index_t v) -> index_t {
        return  (!vs[v].visited && (u == graph::nil || vs[v].key < vs[u].key)) ? v : u;
    };

    
    for (auto& u : vs) {
        u.key = graph::inf;  // 各頂点のキーを∞に設定する
        u.pi  = graph::nil;  // 各頂点の親をNILに設定する
        u.visited = false;
    }
    vs[r].key = w = 0;       // 根rは例外で最初に処理されるようにキーの値を0に設定する
    while (true) {
        index_t u = graph::nil;
        // 最小全域木Aに属さないある孤立点(Aの辺と接続していない頂点)を連結する軽い辺を探す
        for (index_t v = 0; v < n; v++) {
            u = extractmin(vs, u, v);
        }
        if (u == graph::nil) { break; }  // 頂点uがNILを指すならば、探索は終了であり、最小全域木Aは A = {(v, v.π) : v ∈ V - { r } }である

        vs[u].visited = true;  // 辺(u, u.π)を最小全域木Aに加える(ただし、根rは例外)
        w += vs[u].key;        // 最小重みを更新
        for (index_t v = 0; v < n; v++) {  // 頂点uの隣接行列の走査
            if (M[u][v] < vs[v].key) {     // 白または、灰頂点に対しては、属性の更新確認を行う必要がある
                vs[v].pi  = u;             // vのπ属性と
                vs[v].key = M[u][v];       // key属性を更新する
            }
        }
    }
    return std::make_pair(vs, w);
}



int main(void)
{
    using namespace std;
    int n;   cin >> n;
    adjmtx_t G; G.resize(n);

    for (int i = 0; i < n; i++) {
        G[i].resize(n);
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            if (k == -1) k = graph::inf;
            G[i][j] = k;
        }
    }

    auto mst = prim(G);
    cout << mst.second << endl;
    
    return 0;
}