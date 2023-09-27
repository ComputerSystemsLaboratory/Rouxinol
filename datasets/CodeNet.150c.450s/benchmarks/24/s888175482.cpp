#if 0
最も期待値の大きな区間から金がなくなるまで守ってもらう.
#endif

#include <algorithm>
#include <iostream>
#include <vector>
#include <numeric>
using namespace std;

struct Item
{
    int d; /* 距離 */
    int p; /* 期待値 */
};

int N /* 区間の数 */,
    M /* 予算 */,
    D_SUM /* 区間の距離合計 */,
    P_SUM /* 区間の期待値合計 */;
vector<Item>
    P /* 単位距離あたりの期待値の構造体 */;

// 昇順
bool cmp(const Item &a, const Item &b)
{
    return a.p == b.p ? a.d < b.d : a.p < b.p;
}

int main()
{
    while (cin >> N >> M && !(N == 0 && M == 0))
    {
        D_SUM = 0;
        P_SUM = 0;
        for (int i = 0; i < N; i++)
        {
            Item a;
            cin >> a.d >> a.p;
            D_SUM += a.d;
            P_SUM += a.p * a.d;
            P.push_back(a);
        }
        sort(P.begin(), P.end(), cmp);
        if (D_SUM <= M)
        {
            // かかる金額の合計値が予算以下の場合
            P.clear();
            cout << 0 << endl;
            continue;
        }
        // 予算内では全ての区間で護衛が付けられない場合
        int DIFF = D_SUM - M; // 護衛を付けられない区間の合計
        int result = 0;
        int not_defensed_distance = 0;
        for (auto x : P)
        {
            int sum = not_defensed_distance + x.d;
            if (sum >= DIFF)
            {
                result += (DIFF - not_defensed_distance) * x.p;
                break;
            }
            else
            {
                result += x.d * x.p;
                not_defensed_distance += x.d;
            }
        }
        P.clear();
        cout << result << endl;
    }
}

