#include <cmath>
#include <complex>
#include <iostream>

#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define REP(i,n) FOR(i,0,n)

using namespace std;

typedef complex<double> xy_t;
double dot_product(xy_t a, xy_t b){ return (conj(a) * b).real(); }
double cross_product(xy_t a, xy_t b){ return (conj(a) * b).imag(); }
const double eps = 1e-10;

int main(){
    int n;
    xy_t p[4];
    double x,y;
    cin >> n;
    REP(i,n){
        REP(j,4){
            cin >> x >> y;
            p[j] = xy_t (x,y);
        }
        bool ans = fabs(cross_product(p[0] - p[1], p[2] - p[3])) < eps;
        cout << (ans ? "YES" : "NO") << endl;
    }
}