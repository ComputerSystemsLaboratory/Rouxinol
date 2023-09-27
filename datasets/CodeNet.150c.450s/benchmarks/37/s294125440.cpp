#include <cstdio>
#include <cmath>

using namespace std;

static const double EPS=1e-8;

int main() {
    while (true) {
        double a, b, c, d, e, f;
        if (scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f) == EOF)
            break;

        double x=(c*e-f*b)/(a*e-b*d);
        double y=(c*d-f*a)/(b*d-a*e);

        if (abs(x) < EPS) x = 0;
        if (abs(y) < EPS) y = 0;

        printf("%.3f %.3f\n", x, y);
    }

    return 0;
}