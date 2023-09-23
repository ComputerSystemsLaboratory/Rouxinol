#include <bits/stdc++.h>

#define REP(i,n) for(int i = 0 ; i < n ; ++i)
using namespace std;
typedef long long Int;


Int dp[10][10];
Int INF = 999999999;
int n ;

vector<int> edges;

int main() {
    while(cin >> n , n) {

        REP(i, 100) {
            dp[i / 10][i % 10] = INF;
        }

        REP(i, n) {
            int a, b, c;
            cin >> a >> b >> c;
            dp[a][b] = c;
            dp[b][a] = c;
            dp[a][a] = 0;
            dp[b][b] = 0;

        }


        REP(k, 10) {
            REP(i, 10) {
                REP(j, 10) {
                    dp[i][j] = min(dp[i][j], dp[i][k] + dp[k][j]);
                }
            }
        }
        Int i_min(INF), v_min(INF);
        REP(i, 10) {
            Int sum(0);
            REP(j, 10) {
                if (dp[i][j] != INF)
                    sum += dp[i][j];
            }
            if (sum < v_min && sum) {
                v_min = sum;
                i_min = i;
            }
        }

        cout << i_min << " " << v_min << endl;
    }

    return 0;
}