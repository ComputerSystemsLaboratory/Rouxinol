#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int inf = 1e9 + 7;
using pii = pair<int, int>;
#define rep(i, n) for (int i = 0; i < n; ++i)
#define rrep(i, st, n) for (int i = st; i < n; ++i)
#define chmax(a, b) a = max(a, b)
#define chmin(a, b) a = min(a, b)
int dx[] = {0, 0, -1, 1};
int dy[] = {1, -1, 0, 0};
const int mod = 1e9 + 7;
ll power(ll a,ll b){return b?power(a*a%mod,b/2)*(b%2?a:1)%mod:1;}
using Point = complex<double>;
double dot(Point a, Point b) {return real(conj(a) * b);}
double cross(Point a, Point b) {return imag(conj(a) * b);}
const double eps = 1e-10;
int main() {
    double xa, ya, xb, yb, xc, yc, xp, yp;
    while (cin >> xa >> ya >> xb >> yb >> xc >> yc >> xp >> yp) {
        double tmp = abs(cross(Point(xb - xa, yb - ya), Point(xc - xa, yc - ya)));
        double sum = 0;
        sum += abs(cross(Point(xb - xp, yb - yp), Point(xc - xp, yc - yp)));
        sum += abs(cross(Point(xa - xp, ya - yp), Point(xc - xp, yc - yp)));
        sum += abs(cross(Point(xa - xp, ya - yp), Point(xb - xp, yb - yp)));
        if (abs(tmp - sum) < eps) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    
}

