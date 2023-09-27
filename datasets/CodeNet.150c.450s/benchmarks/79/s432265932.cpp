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

const int MAX = 128;
const double PI = 3.14159265358979323846;
const double EPS = 1e-12;
const int INF = 1<<29;
const int MOD = 1000000007;

int v[MAX];

void solve(void){
    while (1) {
        int n, r;
        scanf("%d %d\n", &n, &r);
        if (n == 0 && r == 0) break;
        rep(n, i) v[i] = n-i;
        rep(r, meaningless_) {
            int vv[n];
            rep(n, i) vv[i] = v[i];
            int p, c;
            scanf("%d %d\n", &p, &c);
            rep(c, j) {
                v[j] = vv[p-1+j];
            }
            rep(p-1, j) {
                v[c+j] = vv[j];
            }
        }
        printf("%d\n", v[0]);
    }
}

int main(void){
  solve();
  return 0;
}

