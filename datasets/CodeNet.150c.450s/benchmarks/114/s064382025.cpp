#include <iostream> 
#include<vector>
#include<algorithm>
#include<map>
#include<iomanip>
#include<set>
#include<queue>
#include<deque>
#include<iomanip>
#include<sstream>
#include<cmath>
#include<bitset>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define req(i,n) for(int i = 1;i <=  n; i++)
#define rrep(i,n) for(int i = n -1;i >= 0;i--)
#define ALL(obj) begin(obj), end(obj)
typedef long long int ll;
typedef long double ld;
const ll INF = (1 << 29);
ll h, m, n; string s;
const ll MOD= 1000000007;
const ld PI = acos(-1);
ll sum = 0;
template<typename A, size_t N, typename T>
void Fill(A(&array)[N], const T & val) {
    std::fill((T*)array, (T*)(array + N), val);
}int a[110][101];
int prim() {
    vector<int> d(110, INF), p(110, -1),co(110,0);
    d[0] = 0; int u, miv = 0;
    while (1) {
        miv = INF;
        u = -1;
        rep(i, n) {
            if (miv > d[i] && co[i] != 2) {
                u = i; miv = d[i];
            }
        }
        if (u == -1) break;
        co[u] = 2;
        rep(v, n) {
            if (co[v] != 2 && a[u][v] != INF) {
                if (d[v] > a[u][v]) {
                    d[v] = a[u][v];
                    p[v] = u; co[v] = 1;
                }
            }
        }
    }
    rep(i, n) {
        if (p[i] != -1) sum += a[i][p[i]];
    }return sum;
}
int main() {
    cin >> n; 
    rep(i, n) {
        rep(j, n) {
            cin >> a[i][j];
            if (a[i][j] == -1) {
                a[i][j] = INF;
            }
        }
    }
    cout << prim() << endl;
}
