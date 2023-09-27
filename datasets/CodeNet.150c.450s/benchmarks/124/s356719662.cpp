/**
 * @brief  最短経路問題(shortest paths problem)におけるDijkstraのアルゴリズム(Dijkstra's algorithm)を扱う
 * @date   作成日     : 2016/02/20
 * @date   最終更新日 : 2016/02/20
 */



//****************************************
// 必要なヘッダファイルのインクルード
//****************************************

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>
#include <cassert>
#include <functional>
#include <queue>



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
 * @brief  すべての辺重みが非負であるという仮定の下で、Dijkstra(ダイクストラ)のアルゴリズム(Dijkstra's algorithm)は
 *         重み付き有向グラフG = (V, E)上の単一始点最短路問題を解く. ここでは各辺(u, v) ∈ Eについてw(u, v) >= 0を仮定する
 *
 * @note   頂点v ∈ Vに対し、それぞれΟ(V)時間の操作を行うので、全体でΟ(V^2)時間を要す
 *
 * @param  const matrix_t& W    非負の重み付き有向グラフW
 * @param  index_t         s    始点s
 * @return 始点sからの最短路重みが最終的に決定された頂点の集合S
 */
vertices_t dijkstra(const matrix_t& W, index_t s)
{
    std::int32_t n = W.size();
    vertices_t S(n);
     // Θ(V)の手続きによって最短経路推定値と先行点を初期化する
    auto initsinglesource = [](vertices_t& S, index_t s) -> void {
        for (auto& v : S) { v.d = limits::inf; v.pi = limits::nil; v.visited = false; }
        S[s].d = 0;
    };
    // 辺(u, v)の緩和(relaxing)はuを経由することでvへの既知の最短路が改善できるか否かを判定し、改善できるならばv.dとv.πを更新する
    // 緩和によって最短路推定値v.dが減少し、vの先行点属性v.πが更新されることがある. 以下のコードは、辺(u, v)上の緩和をΟ(1)時間で実行する
    auto relax = [](const matrix_t& W, index_t v, index_t u,  vertices_t& S) ->void {
        if (!S[v].visited &&  S[v].d > S[u].d + W[u][v]) {
            S[v].d = S[u].d + W[u][v]; S[v].pi = u;
        }
    };
    // 集合Sに属さない"最も軽い"頂点を求める
    auto extractmin = [](const vertices_t& S, std::int32_t n) -> index_t {
        index_t u = limits::nil;
        for (index_t v = 0; v < n; v++ ) {
            u = (!S[v].visited && (u == limits::nil || S[v].d < S[u].d)) ? v : u;
        }
        return u;
    };
    


    initsinglesource(S, s);  // すべての頂点のd値とπ値を初期化する
    while(true) {     
        // 始点sからの最小の最短路推定値を持つ頂点u ∈ V - Sを選択する
        index_t u = extractmin(S, n);   
        if (u == limits::nil) { break; }  // 頂点uがNILを指すならば、探索は終了である
        for (index_t v = 0; v < n; v++) {
            relax(W, v, u, S);  // uを経由することでvへの最短路が改善できる場合には、推定値v.dと先行点v.piを更新する
        }
        S[u].visited = true;  // 黒頂点は集合Sに属す
    }
    // 終了時点では、S = Vなので、すべての頂点u ∈ Vに対してu.d = δ(s, u)である
    // また、このとき、先行点部分グラフGπはsを根とする最短路木である
    return S;
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
    // using namespace std;
    // graph_t G;
    // int n, k, u, v, c;
    
    // cin >> n; G.resize(n);
    // for (int i = 0; i < n; i++) {
    //     cin >> u >> k;
    //     G[u].resize(k);
    //     for (int j = 0; j < k; j++) {
    //         cin >> v >> c;
    //         G[u][j].src = u;
    //         G[u][j].dst = v;
    //         G[u][j].w   = c;
    //     }
    // }

    // vertices_t S = dijkstra(G, 0);
    // for (int i = 0; i < n; i++) {
    //     cout << i << " " << S[i].d << endl; 
    // }

        using namespace std;
    using namespace graph;
    
    matrix_t M;
    int n, k, u, v, c;
    
    cin >> n; M.resize(n);
    for (int j = 0; j < n; j++) {
        M[j].resize(n);
        for (int i = 0; i < n; i++) {
            M[j][i] = limits::inf;
        }
    }
    for (int j = 0; j < n; j++) {
        cin >> u >> k;
        for (int i = 0; i < k; i++) {
            cin >> v >> c;
            M[u][v] = c;
        }
    }
    vertices_t S = dijkstra(M, 0);
    for (int i = 0; i < n; i++) {
        cout << i << " " << S[i].d << endl; 
    }

    return 0;
}