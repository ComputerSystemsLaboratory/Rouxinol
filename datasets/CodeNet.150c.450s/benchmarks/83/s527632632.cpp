#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <string>
#include <sstream>
#include <complex>
#include <vector>
#include <list>
#include <queue>
#include <deque>
#include <stack>
#include <map>
#include <set>
#include <iomanip>
using namespace std;
typedef long long unsigned int ll;
template<typename T> using min_priority_queue = priority_queue<T, vector<T>, greater<T>>;

#define EPS (1e-7)
#define INF (1e9)
#define PI (acos(-1))
#define MOD 1000000007

#define REP(i,n) for(int i=0;i<n;i++)
#define REPS(i,f,n) for(int i=(f);i<(n);i++)
#define EACH(it,v) for(__typeof((v).begin()) it=(v).begin();it!=(v).end();it++)
#define debug(x) #x << "=" << (x)

#define DEBUG

#ifdef DEBUG
#define var_dump(...) fprintf(stdout, __VA_ARGS__)
#define dump(a) cout << a << "\n";
#else
#define var_dump(...) 42
#define dump(a) 42
#endif

typedef pair<int, int> P;
typedef pair<ll, ll> LP;
typedef pair<int, P> PP;
typedef pair<ll, LP> LPP;

int dy4[]={0, 0, 1, -1};
int dx4[]={1, -1, 0, 0};
int dx8[]={0, 0, 1, -1, 1, 1, -1, -1};
int dy8[]={1, -1, 0, 0, 1, -1, -1, 1};

// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DPL_1_B&lang=jp

int dp[105][10005];

int main() {
    int N, W; cin >> N >> W;
    int v[N];
    int w[N];
    REP(i, N) {
        cin >> v[i] >> w[i];
    }

    REP(i, N) {
        REP(j, W+1) {
            if (w[i] > j) {
                dp[i+1][j] = dp[i][j];
            }
            else {
                dp[i+1][j] = max(dp[i][j], dp[i][j - w[i]] + v[i]);
            }
        }
    }

    cout << dp[N][W] << "\n";


    return 0;
}

