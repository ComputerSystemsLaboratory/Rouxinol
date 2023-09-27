#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cmath>
#include <map>
#include <set>
#include <vector>
#include <stack>
#include <queue>
#include <bitset>
#include <algorithm>
#include <numeric>
#include <functional>
using namespace std;

#define Rep(b, e, i) for(int i = b; i <= e; i++)
#define Repr(e, b, i) for(int i = e; i >= b; i--)
#define rep(n, i) Rep(0, n-1, i)
#define repr(n, i) Repr(n-1, 0, i)
#define all(v) (v).begin(), (v).end()
#define pb(x) push_back(x)
#define uniq(x) (x).erase(unique(all(x)),(x).end())

typedef long long ll;
typedef pair<ll, ll> llP;
typedef pair<int, int> P;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z

const int MAX = 200000;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const int MOD = 1000000007;

int N, d, p;
ll M, ans = 0LL;

void solve(void){
    while (1) {
        scanf("%d %lld\n", &N, &M);
        if (N==0&&M==0) return;
        ans = 0LL;
        vector <P> v(N);
        rep(N, i) {
            scanf("%d %d\n", &d, &p);
            v.pb(P(p, d));
            ans += p*d;
        }
        sort(all(v));
        reverse(all(v));
        for (P pd : v) {
            if (pd.second > M) {
                ans -= pd.first*M;
                break;
            }
            ans -= pd.first*pd.second;
            M -= pd.second;
        }
        printf("%lld\n", ans);
    }

}

int main(void){
  solve();
  return 0;
}

