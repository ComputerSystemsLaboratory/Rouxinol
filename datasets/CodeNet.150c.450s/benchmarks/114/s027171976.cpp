/**
 * @brief Primのアルゴリズムのテストを行います
 * @note
 * @date  2016/04/17
 */


//****************************************
// 必要なヘッダファイルのインクルード
//****************************************

#include <utility>
#include <algorithm>
#include <vector>
#include <tuple>
#include <iostream>



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
 * @brief  Primのアルゴリズムにおいては、最小全域木Aに属さないある孤立点(Aの辺と接続していない頂点)を連結する軽い辺を探し、
 *         Dijkstraのアルゴリズムにおいては、始点sからの最小の最短路推定値を持つ頂点u ∈ V - Sを選択する(集合Sに属さない"最も軽い"頂点を求める)
 *
 * @note   この関数が呼び出されるのはHeapを使わないPrimおよびDijkstraのアルゴリズムであり、
 *         ここでは、Heapを用いないでmin優先度付きキューを実現している
 *         そのようなアルゴリズムの記述においては、頂点の色において白は白および灰色、黒は黒としている
 *         よって、v.visitedがfalseのとき、v.colorは白または灰色であり、trueのとき、黒色である
 *
 * @param  const vertices_t& V 探索対象の頂点集合V
 * @param  index_t n           頂点集合Vの頂点数n
 * @return index_t u           条件を満たす頂点u(条件を満たす頂点が存在しない場合はnilを返す)
 */
static index_t extract_min(const vertices_t& V, index_t n)
{
    index_t  u = limits::nil;
    weight_t d = limits::inf; 
    for (index_t v = 0; v < n; v++) {
        if (!V[v].visited && V[v].d < d) { d = V[v].d; u = v; }
    }
    return u;
}


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
 * @param  const matrix_t& W 隣接行列W
 * @param  index_t         r 最小全域木の根
 */
std::pair<vertices_t, weight_t> prim(const matrix_t& W, index_t r)
{
    index_t n = W.size();
    vertices_t A(n); weight_t w;

    
    for (auto& u : A) {
        u.key = limits::inf;  // 各頂点のキーを∞に設定する
        u.pi  = limits::nil;  // 各頂点の親をNILに設定する
        u.visited = false;
    }
    A[r].key = w = 0;         // 根rは例外で最初に処理されるようにキーの値を0に設定する
    while (true) {
        // 最小全域木Aに属さないある孤立点(Aの辺と接続していない頂点)を連結する軽い辺を探す
        index_t u = extract_min(A, n);
        if (u == limits::nil) { break; }   // 頂点uがNILを指すならば、探索は終了であり、最小全域木Aは A = {(v, v.π) : v ∈ V - { r } }である
        for (index_t v = 0; v < n; v++) {  // 頂点uの隣接行列の走査を行う
            if (W[u][v] < A[v].key) {      // 白または、灰頂点に対しては、属性の更新確認を行う必要がある
                A[v].pi  = u;              // vのπ属性と
                A[v].key = W[u][v];        // key属性を更新する
            }
        }
        A[u].visited = true;  // 辺(u, u.π)を最小全域木Aに加える(ただし、根rは例外)
        w += A[u].key;        // 最小重みを更新
    }
    return std::make_pair(A, w);
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
    using namespace graph;
    using namespace std;
    matrix_t M;
    int n, k;
    
    cin >> n; M.resize(n);
    for (int j = 0; j < n; j++) {
        M[j].resize(n);
        for (int i = 0; i < n; i++) {
            cin >> k;
            M[j][i] = k == -1 ? limits::inf : k;
        }
    }

    auto mst = prim(M, 0);
    cout << mst.second << endl;
    
    return 0;
}