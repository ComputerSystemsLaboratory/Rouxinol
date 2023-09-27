#include <bits/stdc++.h>

#define REP(i, n) for(int i = 0; i < n; i++)
using namespace std;

int main()
{   
    long long n, m;
    while (cin >> n >> m && n > 0) {

        vector<pair<int, int>> pd(n);
        int d, p;

        REP(i, n) {
            cin >> d; cin >> p;
            pd[i] = make_pair(p, d);
        }

        /* 各区間における襲われる期待値を昇順 */
        sort(pd.begin(), pd.end());
        
        /* 総合距離から守ることができ'ない'距離 guard を算出 */
        long long d_sum = 0;
        REP(i, n) d_sum += pd[i].second;
        long long guard = d_sum - m;

        /* guard分の期待値 p_sum を算出　*/
        long long p_sum = 0;

        for (int i = 0; i < n; i++) {
            if (guard <= 0)  break;

            if (guard >= pd[i].second) {
                guard -= pd[i].second;
                p_sum += (pd[i].first * pd[i].second);
            }

            else if (m > 0) {
                p_sum += (pd[i].first * guard);
                guard = 0;
            }
        }

        cout << p_sum << endl;
    }
}
