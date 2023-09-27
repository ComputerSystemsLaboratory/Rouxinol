#include <iostream>
#include <complex>
#include <cmath>
using namespace std;

double cross(complex<double> z1, complex<double> z2) {
    return (z1.real()*z2.imag() - z1.imag()*z2.real());
}
 
int main(int argc, char** argv) {
    static const double EPS = 1e-10;
    int n;
    cin >> n;
    for(int i=0; i<n; i++) {
        double x[4], y[4];
        for(int j=0; j<4; j++) {
            cin >> x[j] >> y[j];
        }
        complex<double> ab(x[1]-x[0], y[1]-y[0]);
        complex<double> cd(x[3]-x[2], y[3]-y[2]);
        if(abs(cross(ab, cd)) < EPS) { // 外積が0なら平行
            cout << "YES" << endl;
        }else {
            cout << "NO" << endl;
        }
    }
}