//http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0012&lang=jp
//????§£?????????

#include<iostream>
#include<complex>
using namespace std;

typedef complex<double> xy_t;

double cross(xy_t a, xy_t b) { return (conj(a)*b).imag(); }
double x[4], y[4];
int main()
{
    while (true) {
        for (int i = 0; i < 4; i++) {
            cin >> x[i] >> y[i];
        }
        if (!cin)break;
        xy_t a(x[0], y[0]), b(x[1], y[1]), c(x[2], y[2]), p(x[3], y[3]);
        double pab=cross(a - p, b - p);
        double pbc=cross(b - p, c - p);
        double pca=cross(c - p, a - p);
        if (abs(pab - pbc) < abs(pab + pbc) &&
            abs(pbc - pca) < abs(pbc + pca) &&
            abs(pca - pab) < abs(pca + pab))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}