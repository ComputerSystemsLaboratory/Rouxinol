
#include <string>
#include <iostream>
#include <complex>
#include <sstream>
#include <cmath>
#include <algorithm>
#include <vector>
#define rep(i,n) for(int i = 0;i<(n);i++)
typedef unsigned long long ull;
using namespace std;
typedef complex<double> xy_t;

double dot_product(xy_t a, xy_t b){return (conj(a)*b).real();}
double cross_product(xy_t a, xy_t b){return (conj(a)*b).imag();}
xy_t projection(xy_t p,xy_t b){ return b*dot_product(p, b)/norm(b);}
const double eps = 1e-11;
int main (){
    int N;
    cin >> N;
    rep(_N,N){
        double x[4],y[4];
        rep(i,4){
            cin >> x[i] >> y[i];
        }
        xy_t a[2] = {
            xy_t(x[0],y[0]) - xy_t(x[1],y[1]),
            xy_t(x[2],y[2]) - xy_t(x[3],y[3])
        };
        bool p = abs(cross_product(a[0], a[1])) < eps;
        cout << (p ? "YES" : "NO") << endl;
    }
	return 0;
}