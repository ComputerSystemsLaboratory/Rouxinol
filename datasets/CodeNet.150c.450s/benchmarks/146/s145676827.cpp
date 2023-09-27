#include <algorithm>
#include <iostream>
#include <vector>
#include <math.h>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <iomanip>
#include <numeric>
#include <tuple>
#include <bitset>
#include <complex>
#define _USE_MATH_DEFINES
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;
typedef pair<ll, ll> plglg;
typedef tuple<int, int, int> tiii;
typedef tuple<ll, ll, ll> tlglglg;
typedef complex<double> xy_t;
int dx[4] = {1, 0, -1, 0};
int dy[4] = {0, 1, 0, -1};
double pi = 3.141592653589793;
ll mod = 1000000007;
int intmax = 2147483647;
int intmin = -2147483648;
ll llmax = 9223372036854775807;
ll llmin = -9223372036854775807;
ll inf = llmax / 2;
double eps = 1e-11;

double cross_product (xy_t a, xy_t b) {
    return (conj(a) * b).imag();
}

xy_t P[110];

int main() {
    int n;
    cin >> n;
    double x[4], y[4];
    for (int i = 0; i < n; i++) {
        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }
        xy_t a[2] = {
            xy_t (x[0], y[0]) - xy_t (x[1], y[1]),
            xy_t (x[2], y[2]) - xy_t (x[3], y[3])
        };
        bool ok = abs(cross_product(a[0], a[1])) < eps;
        cout << (ok ? "YES" : "NO") << endl;
    }
}

