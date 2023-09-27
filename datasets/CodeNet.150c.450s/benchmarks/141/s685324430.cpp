#include <iostream>
#include <complex>
using namespace std;

typedef complex<double> Pt;
double cross(const Pt &a, const Pt &b) { return imag(conj(a)*b); }

int main()
{
    double x1, x2, x3, y1, y2, y3, xp, yp;
    while(cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> xp >> yp)
    {
        Pt a = Pt(x1, y1), b = Pt(x2, y2), c = Pt(x3, y3), p = Pt(xp, yp);
        a -= p; b -= p; c -= p;
        double d = cross(a, b) * cross(b, c);
        double e = cross(b, c) * cross(c, a);
        cout << (d > 0 && e > 0 ? "YES" : "NO") << endl;
    }
}