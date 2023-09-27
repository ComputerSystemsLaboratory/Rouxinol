#include <bits/stdc++.h>
using namespace std;
#define repd(i,a,b) for (int i=(a);i<(b);i++)
#define rep(i,n) repd(i,0,n)
#define all(x) (x).begin(),(x).end()
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return true; } return false; }
template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return true; } return false; }
typedef long long ll;
const long long INF = 1LL << 60;
typedef pair<int, int> P;
int main()
{
    while (1) {
        int H;
        cin >> H;
        if (H == 0) break;
        int puzzle[H][5];
        rep(i, H) {
            rep(j, 5) cin >> puzzle[H - i - 1][j];
        }
        bool flag = true;
        int ans = 0;
        while (flag) {
            int step1 = 0;
            // step1
            rep(i, H) {
                int cnt = 0;
                int s = -1;
                rep(j, 4) {
                    if (puzzle[i][j] == puzzle[i][j + 1] && puzzle[i][j] != -1) cnt++;
                    else cnt = 0;
                    if (cnt >= 2) {
                        s = j - 1;
                        break;
                    }
                }
                if (s == -1) {
                    step1++;
                    continue;
                }
                int ct = puzzle[i][s];
                cnt = 0;
                repd(j, s, 5) {
                    if (ct != puzzle[i][j]) break;
                    puzzle[i][j] = -1;
                    cnt++;
                }
                ans += cnt * ct;
            }

            if (step1 == H) {
                flag = false;
                continue;
            }

            // step2
            bool step2 = true;
            while (step2) {
                step2 = false;
                repd(i, 1, H) {
                    rep(j, 5) {
                        if (puzzle[i][j] != -1 && puzzle[i - 1][j] == -1) {
                            puzzle[i - 1][j] = puzzle[i][j];
                            puzzle[i][j] = -1;
                            step2 = true;
                        }
                    }
                }
            }
        }

        cout << ans << endl;
    }
    return 0;
}
