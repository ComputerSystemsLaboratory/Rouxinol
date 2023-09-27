#include <iostream>
#include <complex>

using namespace std;

typedef complex<double> P;

#define  EPS (1e-11)
#define  EQ(a, b)  (abs((a) - (b)) < EPS)
#define  EQV(a, b)  (EQ((a).real(), (b).real()) && EQ((a).imag(), (b).imag()))

double cross(P a, P b) 
{
    return (a.real() * b.imag() - a.imag() * b.real());
}

int main()
{
    double x1, y1, x2, y2, x3, y3, xp, yp;

    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp) {
        P a = P(x1, y1);
        P b = P(x2, y2);
        P c = P(x3, y3);
        P x = P(xp, yp);

        if ((cross(b - a, x - a) > EPS &&
             cross(c - b, x - b) > EPS &&
             cross(a - c, x - c) > EPS) ||
            (cross(b - a, x - a) < -EPS &&
             cross(c - b, x - b) < -EPS &&
             cross(a - c, x - c) < -EPS))
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}