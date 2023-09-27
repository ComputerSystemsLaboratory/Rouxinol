#include <stdio.h>
#include <complex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef complex<double> P;

double cross(const P& a, const P& b) { return imag(conj(a)*b); }

bool same(const P& a, const P& b, const P& c, const P& p) {
    return cross(b-a, c-a) * cross(b-a, p-a) >= 0;
}

bool in(const P& a, const P& b, const P& c, const P& p) {
    return same(a, b, c, p) && same(b, c, a, p) && same(c, a, b, p);
}

int main() {
    double x1, y1, x2, y2, x3, y3, xp, yp;
    while (scanf("%lf%lf", &x1, &y1) != EOF) {
        scanf("%lf%lf", &x2, &y2);
        scanf("%lf%lf", &x3, &y3);
        scanf("%lf%lf", &xp, &yp);
        const bool ans = in(P(x1, y1), P(x2, y2), P(x3, y3), P(xp, yp));
        puts(ans ? "YES" : "NO");
    }
    return 0;
}