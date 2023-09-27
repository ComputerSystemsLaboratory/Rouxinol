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
typedef pair<int, int> intP;
typedef std::priority_queue<int> IntPrioQueue; //Z->A
typedef std::priority_queue<int, std::vector<int>, std::greater<int> > IntReversePrioQueue; //A->Z

const int MAX = 1500010;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const int MOD = 1000000007;

int h[MAX], w[MAX];

void solve(void){
    while (1) {
        int N, M; scanf("%d %d\n", &N, &M);
        if (N == 0 && M == 0) break;
        vector <int> vh, vw;
        memset(h, 0, sizeof(h));
        memset(w, 0, sizeof(w));
        rep(N, i) {
            int hh;
            scanf("%d\n", &hh);
            vh.pb(hh);
        }
        rep(M, i) {
            int ww;
            scanf("%d\n", &ww);
            vw.pb(ww);
        }

        Rep(1, N, k) {
            int tmp = 0;
            rep(k, i) tmp += vh[i];
            h[tmp]++;
            rep(N-k, i) {
                tmp += vh[k+i] - vh[i];
                h[tmp]++;
            }
        }
        Rep(1, M, k) {
            int tmp = 0;
            rep(k, i) tmp += vw[i];
            w[tmp]++;
            rep(M-k, i) {
                tmp += vw[k+i] - vw[i];
                w[tmp]++;
            }
        }
        int ans = 0;
        rep(MAX, i) ans += h[i]*w[i];
        printf("%d\n", ans);
    }

}

int main(void){
  solve();
  return 0;
}

