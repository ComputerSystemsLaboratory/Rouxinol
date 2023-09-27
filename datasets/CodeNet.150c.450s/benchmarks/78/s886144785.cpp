// テ・ツ淞コテヲツ慊ャテ」ツδ?」ツδウテ」ツδ療」ツδャテ」ツδシテ」ツδ?

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

const int S = 1000010;
int dp[S][2];

signed main() {
    rep(i,1,S) rep(j,0,2) dp[i][j] = INF;
    repq(i,1,210) rep(j,0,S) {
        int d = i * (i+1) * (i+2) / 6;
        if(j-d < 0) continue;
        chmin(dp[j][0], dp[j-d][0] + 1);
        if(d % 2) chmin(dp[j][1], dp[j-d][1] + 1);
    }

    while(cin >> N, N) {
        printf("%lld %lld\n", dp[N][0], dp[N][1]);
    }
    return 0;
}