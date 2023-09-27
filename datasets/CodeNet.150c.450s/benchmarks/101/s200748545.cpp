/**
 * @brief 強連結(分解)アルゴリズムのテスト
 * @date  作成日     : 2016/02/15
 * @date  最終更新日 : 2016/02/15
 */


//****************************************
// 必要なヘッダファイルのインクルード
//****************************************

#include <iterator>
#include <functional>
#include <utility>
#include <algorithm>
#include <vector>
#include <iostream>



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
        color _color;     /**< 頂点の色        */
        bool  visited;    /**< 発見済みか?     */
    };
    weight_t f;           /**< 時刻印          */
    
    vertex() : index(0), d(0), pi(0), _color(color::white) {}
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


//****************************************
// 関数の定義
//****************************************

/**
 * @brief  トポロジカルソートを行います
 *
 * @note   有向非巡回グラフG = (V, E)のトポロジカルソート(topological sort)は頂点集合上の線形順序で、
 *         Gが辺(u, v)を含むならば、この線形順序でuがvより先に現れるものである. (グラフに巡回路があればこのような線形順序は存在しない)
 *         グラフのトポロジカルソートは、すべての有向辺が左から右へ向かう、水平線上での頂点の並べ方である
 * @param  const graph& G 有向非巡回グラフ
 * @return 既ソートリスト
 */
array tsort(const graph& G)
{
    std::int32_t n = G.lst.size();
    std::vector<color> _color(n, color::white);
    array lst(n);

    // 白節点を訪れる
    std::function<bool(index_t)> visit = [&](index_t u) {
        _color[u] = color::gray;   // uを灰に彩色する
        for (auto& e : G.lst[u]) {  // vと隣接する各頂点wを調べ、
            index_t w = e.dst;
            if (_color[w] == color::white
             && !visit(w)) { return false; }  // wが白なら再帰的にwを調べる
        }
        _color[u] = color::black;  // uを黒に彩色する
        lst.push_back(u);          // リストの末尾に挿入する
        return true;
    };


    // 各頂点vの終了時刻v.fを計算するためにDFS(G)を呼び出す
    for (index_t v = 0; v < n; v++) {
        if (_color[v] == color::white && !visit(v)) { return {}; };
    }
    reverse(lst.begin(), lst.end());  // リストが逆順にソートされているのでreverseを行う
    return lst;     // 頂点のリストを返す
}



 /**
 * @brief  強連結成分(分解)アルゴリズム
 *
 * @note   グラフを強連結成分に分解した後、個々の強連結成分上でアルゴリズムを実行し、
 *         得られた解を成分間の連結構造にしたがって組み合わせて最終的に解を得る
 *
 * @note   グラフG = (V, E)の強連結成分を求めるアルゴリズムはGの転置を用いる
 *         Gの転置はグラフG^T = (V, E^T), E^T = { (u, v) : (v, u) ∈ E }である
 *         すなわち、E^TはGの辺の方向を逆にしたものである. Gの隣接リストが与えられると、
 *         G^TをΟ(V + E)時間で生成できる. 興味深いことに、GとG^Tはまったく同じ強連結成分を持つ
 *         G上でuとvが互いに到達可能であることと、G^T上でこれらが互いに到達可能であることとは等価である
 *
 * @note   以下の線形時間(すなわち、Θ(V + E)時間)アルゴリズムは、深さ優先探索を2回、最初にG上で、
 *         つぎにG^T上で実行することによって有向グラフG = (V, E)の強連結成分を求める
 *
 *         STRONGLY-CONNECTED-COMPONENTS(G)
 *         1 DFS(G)を呼び出し、各頂点uに対して終了時刻u.fを計算する
 *         2 G^Tを計算する
 *         3 DFS(G^T)を呼び出すが、DFSの主ループでは(第1行で計算した)u.fの降順で頂点を探索する
 *         4 第3行で生成した深さ優先森の各木の頂点を、それぞれ分離された強連結成分として出力する
 *
 * @param  const graph& G グラフG
 * @return components[v] 頂点vが含まれる連結成分の番号となるような集合
 */
std::vector<index_t> scc(const graph& G)
{
    std::int32_t n = G.lst.size(); vertices vs(n);
    std::vector<index_t> components(n, -1);
    std::vector<color> _color(n, color::white);
    adjlst GT(n);

    std::function<void(index_t, index_t)> visit = [&](index_t u, index_t k) {
        _color[u] = color::gray;
        components[u] = k;
        for (auto& e : GT[u]) {
            index_t w = e.dst;
            if (_color[w] == color::white) {
                visit(w, k);
            }
        }
        _color[u] = color::black;
    };


    // DFS(G)を呼び出し、各頂点uに対して終了時刻u.fを計算する
    array tlst = tsort(G);

    // G^Tを計算する
    for (auto& es : G.lst) {
        for (auto& e : es) {
            GT[e.dst].emplace_back(e.dst, e.src);
        }
    }

    // DFS(G^T)を呼び出す
    index_t k = 0;
    for (auto u : tlst) { // 成分グラフの頂点をトポロジカルソートされた順序で訪問する
        if (_color[u] == color::white) {
            visit(u, k++);
        }
    }

    // 分離された強連結成分を出力
    return components;
}




int main()
{
    using namespace std;
    graph G;
    int s, t, m, n, q;
    cin >> n >> m;
    G.lst.resize(n);
    for (index_t i = 0; i < m; i++) {
        cin >> s >> t;
        G.lst[s].push_back(edge(s, t));
        G.lst[t].push_back(edge(t, s));
    }

    auto _scc = scc(G);

    cin >> q;

    for (int i = 0; i < q; i++) {
        cin >> s >> t;
        cout << ((_scc[s] == _scc[t]) ? "yes" : "no") << endl;
    }

    return 0;
}