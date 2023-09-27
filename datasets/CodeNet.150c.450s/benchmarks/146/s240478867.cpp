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

int main() {
    int n; cin >> n;
    while (n--) {
        double xa, ya, xb, yb, xc, yc, xd, yd;
        cin >> xa >> ya >> xb >> yb >> xc >> yc >> xd >> yd;
        //cout << cross(Point(xa - xb, ya - yb), Point(xc - xd, yc - yd)) << endl;
        if (abs(cross(Point(xa - xb, ya - yb), Point(xc - xd, yc - yd))) < 1e-12) {
            cout << "YES" << endl;
        } else cout << "NO" << endl;
    }
}

