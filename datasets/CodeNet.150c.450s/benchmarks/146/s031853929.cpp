#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < n; i++)
using namespace std;
using ll = long long;
typedef complex<double> xy_t;

const double eps = 1e-11;
double x[4], y[4];
int n;

double dot_product(xy_t a, xy_t b)
{
    return (conj(a) * b).real();
}

double cross_product(xy_t a, xy_t b)
{
    return (conj(a) * b).imag();
}

int main()
{
    cin >> n;
    rep(t, n)
    {
        rep(i, 4) cin >> x[i] >> y[i];
        xy_t a[2] = {
            xy_t(x[0], y[0]) - xy_t(x[1], y[1]),
            xy_t(x[2], y[2]) - xy_t(x[3], y[3])};
        bool p = abs(cross_product(a[0], a[1])) < eps;
        cout << (p ? "YES" : "NO") << endl;
    }
    return 0;
}
