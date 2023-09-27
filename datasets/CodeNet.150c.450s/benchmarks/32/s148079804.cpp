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

int P[210];

signed main() {
    int M, Nmi, Nma;
    while(cin >> M >> Nmi >> Nma, M || Nmi || Nma) {
        rep(i,0,M) cin >> P[i];
        sort(P, P+M, greater<int>());
        int gapmax = -1, ans = 0;
        rep(i,0,M) {
            if(!(Nmi <= i+1 && i+1 <= Nma)) continue;
            int gap = P[i] - P[i+1];
            if(gapmax <= gap) {
                gapmax = gap;
                ans = i+1;
            }
        }
        cout << ans << endl;
    }
    return 0;
}