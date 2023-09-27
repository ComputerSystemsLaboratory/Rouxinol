// Parallelism
// http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=0021&lang=jp
// 
// 

#include <iostream>
#include <complex>
#include <cmath>
#include <cstdio>

using namespace std;
typedef std::complex<double> xy_t;

int N;
double x[4], y[4];
const double eps = 1e-11;

double dot_product(xy_t a, xy_t b) { return (conj(a)*b).real(); }

double cross_product(xy_t a, xy_t b) { return (conj(a)*b).imag(); }

xy_t projection(xy_t p, xy_t b) { return b*dot_product(p,b)/norm(b); }

int main(){
    cin >> N;
    for(int i = 0; i < N; ++i){
        for(int i = 0; i < 4; ++i){
            cin >> x[i] >> y[i];
        }

    xy_t a[2] = {
        xy_t(x[0],y[0]) - xy_t(x[1],y[1]),
        xy_t(x[2],y[2]) - xy_t(x[3],y[3])
    };

    bool p = abs(cross_product(a[0],a[1])) < eps;
    
    cout << (p ? "YES" : "NO") << endl;
    }
}
