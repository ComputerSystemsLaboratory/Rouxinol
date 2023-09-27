// ?????¬???????????¬?????? (define int long long ?????????)

#include <iostream>
#include <iomanip>
#include <cstdio>
#include <string>
#include <cstring>
#include <deque>
#include <list>
#include <queue>
#include <stack>
#include <vector>
#include <utility>
#include <algorithm>
#include <map>
#include <set>
#include <complex>
#include <cmath>
#include <limits>
#include <cfloat>
#include <climits>
#include <ctime>
#include <cassert>
#include <numeric>
#include <functional>
using namespace std;

#define rep(i,a,n) for(int (i)=(a); (i)<(n); (i)++)
#define repq(i,a,n) for(int (i)=(a); (i)<=(n); (i)++)
#define repr(i,a,n) for(int (i)=(a); (i)>=(n); (i)--)

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};

const int INF = 1 << 25;
int R, C;
int board[20][10010];
int inv[20][10010];

int main() {
    while(cin >> R >> C, R || C) {
        rep(i,0,R) rep(j,0,C) {
            cin >> board[i][j];
            inv[i][j] = board[i][j] ^ 1;
        }

        int ans = 0;
        rep(bit,0,1<<R) {
            vector<int> cnt(C);
            rep(i,0,R) {
                // ?????£????????????
                if(bit >> i & 1) {
                    rep(j,0,C) {
                        cnt[j] += inv[i][j];
                    }
                }
                // ?????£??????????????????
                else {
                    rep(j,0,C) {
                        cnt[j] += board[i][j];
                    }
                }
            }

            int tmp = 0;
            rep(i,0,C) {
                tmp += max(cnt[i], R - cnt[i]);
            }
            ans = max(ans, tmp);
        }
        cout << ans << endl;
    }
    return 0;
}