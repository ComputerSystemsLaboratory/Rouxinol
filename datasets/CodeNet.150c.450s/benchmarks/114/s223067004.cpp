/**
 * @brief 最小全域木問題(minimum-spanning tree problem)における
 *        Kruskalのアルゴリズム(Kruskal's algorithms)の実装を行う
 * @date  作成日     : 2016/02/16
 * @date  最終更新日 : 2016/02/16
 */



//****************************************
// 必要なヘッダファイルのインクルード
//****************************************

#include <iostream>
#include <utility>
#include <algorithm>
#include <vector>




//****************************************
// 構造体の定義
//****************************************

using weight_t = std::int32_t;
using index_t  = std::int32_t;  

/**
 * @brief  頂点色列挙構造体(scoped enum)
 * @detail (u, v) ∈ Eで頂点uが黒ならば頂点vは灰か黒である
 *         すなわち、黒頂点に隣接する全ての頂点は発見済みである
 *         灰頂点は白頂点に隣接することがあり、これらの頂点が既発見頂点と未発見頂点の境界をなす
 */
enum struct color : std::int32_t {
    white,  /**< 未発見頂点   */
    black,  /**< 発見済み頂点 */
    gray,   /**< 発見済み頂点 */
};

/**
 * @brief グラフ用ノード(頂点) 
 */
struct vertex {
    index_t index;        /**< 頂点の添字      */
    weight_t d;           /**< 始点sからの距離  */
    index_t pi;           /**< 先行頂点(の添字) */
    union {
        //color color;      /**< 頂点の色        */
        bool  visited;    /**< 発見済みか?     */
    };
    weight_t f;           /**< 時刻印          */
    
    vertex() : index(0), d(0), pi(0)/*, color(color::white)*/ {}
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



using edges    = std::vector<edge>;
using vertices = std::vector<vertex>;
using array    = std::vector<weight_t>;
using adjmtx   = std::vector<array>;
using adjlst   = std::vector<edges>;

/**
 * @brief グラフ構造体
 */
struct graph {
    adjlst lst;    /**< 隣接リスト */
    adjmtx mat;    /**< 隣接行列   */

    enum {
        inf = std::numeric_limits<weight_t>::max() / 3,  /**< @brief 辺が存在しない場合に使用される値  */
        nil = std::numeric_limits<index_t>::min() / 3,   /**< @brief 先行点が存在しない場合に使用される値 */
    };
};



/**< @brief 素集合森 */
struct disjointset {
    using index_t = std::int32_t;
    
    std::vector<index_t> p;
    std::vector<index_t> rank;

    explicit disjointset(std::size_t size) : p(size, -1), rank(size, -1) {}
    
    /**
     * @brief xを唯一の要素(従って、代表元)としてもつ新しい集合を生成する.
     * @note  集合は互いに素であるから、xがすでに別の集合に出現していることはない. 
     *
     * @param int x 節点x
     */
    void makeset(index_t x) {
        p[x]    = x;
        rank[x] = 0;
    }

    /**
     * @brief     xを含む動的集合Sxとyを含む動的集合Syを合併(統合)し、
     *            これらの和集合である新しい集合を生成する.
     * @attention SxとSyはこの操作を実行する前は互いに素であると仮定する.
     *
     * @param int x   動的集合Sxの元x
     * @param int y   動的集合Syの元y
     */
    void merge(index_t x, index_t y) {
        link(findset(x), findset(y));
    }


    /**
     * @brief 手続きmergeの補助関数
     *
     * @param int x 動的集合Sxの代表元x(Sxの根)
     * @param int y 動的集合Syの代表元y(Syの根)
     */
    void link(index_t x, index_t y) {
        // xのランク > yのランクかどうか判定
        if (rank[x] > rank[y]) {  // xのランク > yのランクならば、
            p[y] = x;             // yの親はxを指す
        }
        else {                    // xのランク <= yのランクならば、 
            p[x] = y;             // xの親はyを指す
            
            if (rank[x] == rank[y]) {   // xのランク == yのランクならば、
                rank[y] = rank[y] + 1;  // yのランクをひとつ増やす
            }
        }
    }

    /**
     * @brief  xを含む(唯一の)集合の代表元へのポインタを返す.
     *         手続きfindsetは2パス法に基づく.再帰が進行するのに従って、
     *         find経路を根に向かって上向きに走査して根を発見し、つぎに、
     *         再帰が巻き戻されるにつれて、辿ってきたfind経路を下る2度目の走査を行って、
     *         find経路上の各節点のポインタを直接根を指すように更新する.
     *
     * @param  int x   集合Sxの元x
     * @return int y   集合Sxの代表元(根)
     */
    index_t findset(index_t x) {
        // find経路を根に向かって上向きに走査
        if (x != p[x]) {
            p[x] = findset(p[x]);  // 再帰を進行させる
        }
        return p[x];  // 再帰が底をついてから、根を返す
    }
};



//****************************************
// 関数の定義
//****************************************

/**
 * @brief  Kruskalのアルゴリズム
 *
 * @note   Kruskalのアルゴリズムでは、集合Aは与えられたグラフの頂点集合を頂点集合とする森である
 *         Aに加える安全な辺は、常に2つの異なる連結成分を連結するグラフの最小重み辺である
 *
 * @note   Kruskalのアルゴリズムでは、成長させる森に付け加える安全な辺は、森に属する2つの木を連結するすべての辺の中で、重みが最小の辺(u, v)である
 *         (u, v)が連結する2つの木をC1およびC2とする. (u, v)はC1を別の木と連結する軽い辺だから、(u, v)はこの森に対して安全な辺である
 *         各ステップで重みが可能な限り小さい辺を森に加えているから、Kruskalのアルゴリズムは貪欲アルゴリズムである         
 *
 * @note   Kruskalのアルゴリズムの総実行時間はΟ(ElgV)である
 *
 * @param  const graph& G グラフG
 * @return 辺集合Aとその重み(最小全域木の重み)
 */
std::pair<edges, weight_t> kruskal(const graph& G)
{
    std::int32_t n = G.lst.size();
    auto cmp = [](const edge& e, const edge& f) -> bool { return e.w < f.w; };
    disjointset ds(static_cast<std::size_t>(n));  // 互いな素な集合族のためのデータ構造を準備
    edges E;  // グラフGから集合G.Eを取り出す
    for (auto& es : G.lst) { for (auto& e : es) { E.push_back(e); } }


    
    weight_t w = 0; edges A;             // Aを空集合に初期化し、
    for (index_t v = 0; v < n; v++) {    // 各頂点がそれぞれ1つの木である|V|本の木を生成する
        ds.makeset(v);
    }
    std::sort(E.begin(), E.end(), cmp);  // 重みwの非減少順でG.Eの辺をソートする
    for (auto& e : E) { // 辺を重みの小さいものから順に検討する
        // このループでは、各辺(u, v)について、端点uとvが同じ木に属するかどうかを調べる
        if (ds.findset(e.src) != ds.findset(e.dst)) {  // 両端点が同じ木に属さないならば、
            A.push_back(e); w += e.w;                  // 辺(u, v)をAに加え、
            ds.merge(e.src, e.dst);                    // 2つの木の頂点集合をマージする
        }
    }
    return std::make_pair(A, w);
}



int main(void)
{
    using namespace std;
    int n;   cin >> n;
    graph G; G.lst.resize(n);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int k;
            cin >> k;
            if (k != -1) G.lst[i].emplace_back(i, j, k);
        }
    }

    auto mst = kruskal(G);
    cout << mst.second << endl;
    
    return 0;
}