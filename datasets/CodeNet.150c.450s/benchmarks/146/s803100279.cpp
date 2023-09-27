#include <stdio.h>
#include <complex>
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
typedef complex<double> P;
#define EPS (1e-12)

double cross(const P& a, const P& b) { return imag(conj(a)*b); }

int main() {
    int T;
    scanf("%d", &T);
    while (T--) {
        double x1, y1, x2, y2, x3, y3, x4, y4;
        scanf("%lf%lf", &x1, &y1);
        scanf("%lf%lf", &x2, &y2);
        scanf("%lf%lf", &x3, &y3);
        scanf("%lf%lf", &x4, &y4);
        const bool a = (fabs(cross(P(x1-x2, y1-y2), P(x3-x4, y3-y4))) < EPS);
        puts(a ? "YES" : "NO");
    }
    return 0;
}