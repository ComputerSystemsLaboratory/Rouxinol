/**
 * @brief 素集合森構造体
 * @date  2016/04/16
 */



//****************************************
// 必要なヘッダファイルのインクルード
//****************************************

#include <iostream>
#include <vector>
#include <cstdint>



//****************************************
// 構造体の定義
//****************************************

/**< @brief 素集合森 */
struct disjointset {
    using index_t = std::int32_t;
    using rank_t  = std::int32_t;
    
    std::vector<index_t> p;
    std::vector<rank_t> rank;

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
        if (rank[x] > rank[y]) {  // x.rank > y.rankならば、
            p[y] = x;             // yの親はxを指す
        }
        else {                    // x.rank <= y.rankならば、 
            p[x] = y;             // xの親はyを指す
            
            if (rank[x] == rank[y]) {   // x.rank == y.rankならば、
                rank[y] = rank[y] + 1;  // y.rankをひとつ増やす
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

int main()
{
    using namespace std;
    
    int a, b, q, n, t;

    cin >> n >> q;

    disjointset ds(n);
    for (int i = 0; i < n; i++) { ds.makeset(i); }

    for (int i = 0; i < q; i++) {
        cin >> t >> a >> b;

        if (t == 0) { ds.merge(a, b); }
        else if (t == 1) {
            if (ds.findset(a) == ds.findset(b)) cout << 1 << endl;
            else                                cout << 0 << endl;
        }
    }

    return 0;
}