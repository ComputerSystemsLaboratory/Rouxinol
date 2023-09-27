#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<vector>
#include<set>
#include<queue>
#include<cstdlib>
#include<algorithm>

using namespace std;
#define pb push_back
#define mp make_pair
#define SZ(x) (int)(x).size()

typedef long long LL;
typedef pair<int, int> pii;
typedef pair<double, double> pdd;
typedef pair<LL, LL> pll;

const double eps = 1e-10;
const double PI = acos(-1.0);
//const double PI = 3.14159265358979323846264338327950288419716939937510
int dcmp(const double &x) { if (fabs(x) < eps) return 0; return x < 0 ? -1 : 1; }
const int MOD = 1e9 + 7;
const int INF = 2e9;
const double INF_d = 1e64;

template<class T> 
T qmod(T a, T b){ T ret = 1; while (b){ if (b & 1) ret *= a; b >>= 1; a *= a; } return ret; }
template<class T>
T gcd(T a, T b){ return !b ? a : gcd(b, a % b); }
template<class T>
T ex_gcd(T a, T b, T &x, T &y){
    if (!b){ x = 1, y = 0; return a; }
    T t, ret;
    ret = ex_gcd(b, a % b, x, y);
    t = x, x = y, y = t - a / b * y;
    return ret;
}
template<class T>
T inv(T t, T p){ return t == 1 ? 1 : (p - p / t) * inv(p % t, p) % p; }
// head

const int N = 1e4 + 7;
int f[N], n, m;

void init(int n){
    for (int i = 0; i <= n; i++) f[i] = i;
}

int find_fa(int x){ return x == f[x] ? x : f[x] = find_fa(f[x]); }

void unite(int x, int y){
    int rx = find_fa(x), ry = find_fa(y);
    if (rx != ry) f[max(rx, ry)] = min(rx, ry);
}

int main(){
    scanf("%d%d", &n, &m);
    init(n);
    for (int i = 0; i < m; i++){
        int x, y, op;
        scanf("%d%d%d", &op, &x, &y);
        if (op) printf("%d\n", find_fa(x) == find_fa(y) ? 1 : 0);
        else{
            unite(x, y);
        }
    }
    return 0;
}
