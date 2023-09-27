#include <cstdio>
#include <complex>
#include <vector>

using namespace std;

typedef complex<double> P;
struct L : public vector<P> {
    L(const P &a, const P &b) {
        push_back(a);
        push_back(b);
    }
};

const double EPS = 1e-10;

double cross(P a, P b)
{
    return imag(conj(a) * b);
}

bool intersectLL(const L &l, const L &m)
{
    return fabs(cross(l[1]-l[0], m[1]-m[0])) > EPS;
}

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        P p[4];
        double x, y;

        scanf("%lf %lf", &x, &y);
        p[0] = P(x, y);
        scanf("%lf %lf", &x, &y);
        p[1] = P(x, y);
        scanf("%lf %lf", &x, &y);
        p[2] = P(x, y);
        scanf("%lf %lf", &x, &y);
        p[3] = P(x, y);

        puts(intersectLL(L(p[0], p[1]), L(p[2], p[3])) ? "NO" : "YES");
    }

    return 0;
}