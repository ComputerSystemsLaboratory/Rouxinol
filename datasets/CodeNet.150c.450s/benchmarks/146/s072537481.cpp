#include <cstdio>
#include <algorithm>
#include <complex>
#include <utility>

using namespace std;

static const double EPS=1e-12;
static const double INF=1e24;
static const double PI=3.141592653589793;

using Point=complex<double>;

namespace std {
    bool operator<(const Point &a, const Point &b) {
        return real(a)!=real(b)? real(a)<real(b) : imag(a)<imag(b);
    }
}

double cross_prod(const Point &a, const Point &b) {
    return imag(conj(a)*b);
}

struct Line: public pair<Point, Point> {
    Line() {}
    Line(const Point &a, const Point &b) {
        first = a;
        second = b;
    }
};

bool is_parallel(const Line &l, const Line &m) {
    return abs(cross_prod(l.second-l.first, m.second-m.first)) < EPS;
}

bool testcase_ends() {
    double x, y;
    if (scanf("%lf %lf", &x, &y) == EOF)
        return 1;

    Point A(x, y);
    scanf("%lf %lf", &x, &y);
    Point B(x, y);
    scanf("%lf %lf", &x, &y);
    Point C(x, y);
    scanf("%lf %lf", &x, &y);
    Point D(x, y);

    printf("%s\n", is_parallel(Line(A, B), Line(C, D))? "YES":"NO");
    return 0;
}

int main() {
    size_t n;
    scanf("%zu", &n);

    for (size_t i=0; i<n; ++i)
        if (testcase_ends())
            return 1;

    return 0;
}