// ?????¬???????????¬??????

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
#define int long long int

template<typename T> void chmax(T &a, T b) {a = max(a, b);}
template<typename T> void chmin(T &a, T b) {a = min(a, b);}
template<typename T> void chadd(T &a, T b) {a = a + b;}

typedef pair<int, int> pii;
typedef long long ll;

int dx[] = {0, 0, 1, -1};
int dy[] = {1, -1, 0, 0};
constexpr ll INF = 1001001001001001LL;
constexpr ll MOD = 1000000007LL;

int N;
int R[110], C[110];

// [i, j) ???????????????????????°????°?
int dp[110][110];

signed main() {
    cin >> N;
    rep(i,0,N) cin >> R[i] >> C[i];
    repq(i,0,N) {
        repq(j,0,N) {
            if(i < j && j-i != 1) {
                dp[i][j] = dp[i][j-1] + R[i] * R[j-1] * C[j-1];
                // printf("dp[%lld][%lld] = %lld\n", i, j, dp[i][j]);
            }
        }
    }

    repq(i,3,N) {
        rep(j,0,N-i+1) {
            rep(k,j+1,j+i) {
                chmin(dp[j][j+i], 
                      dp[j][k] + dp[k][j+i] + R[j] * R[k] * C[j+i-1]);
            }
        }
    }
    cout << dp[0][N] << endl;
    return 0;
}