#include <iostream>
#include <cstdio>
#include <complex>
#define print(a) cout << a << endl;
using namespace std;
typedef complex<double> P;

//三角形の内部にあるか
bool is_in_triangle(double cross1, double cross2, double cross3) {
    return((cross1 > 0 && cross2 > 0 && cross3 > 0) || (cross1 < 0 && cross2 < 0 && cross3 < 0));
}
//ベクトルの引き算
P subVector(P a, P b) {
    return(P(a.real() - b.real(), a.imag() - b.imag()));
}

int main(void) {
    double x1, y1, x2, y2, x3, y3, px, py;
    
    while(scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &px, &py) != EOF) {
        P a(x1, y1), b(x2, y2), c(x3, y3), p(px, py);
        //辺ベクトル、頂点と辺とのベクトル
        P ab = subVector(b, a), bc = subVector(c, b), ca = subVector(a, c);
        P bp = subVector(p, b), cp = subVector(p, c), ap = subVector(p, a);
        //外積(z成分のみ)
        double cross1 = ab.real() * bp.imag() - ab.imag() * bp.real(),
               cross2 = bc.real() * cp.imag() - bc.imag() * cp.real(),
               cross3 = ca.real() * ap.imag() - ca.imag() * ap.real();
        //判定
        if(is_in_triangle(cross1, cross2, cross3)) cout << "YES" << endl;
        else                                       cout << "NO"  << endl;
    }
    return(0);
}