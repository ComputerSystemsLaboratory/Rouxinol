#include <complex>
#include <iostream>

#define FOR(i,k,n) for (int (i)=(k); (i)<(n); ++(i))
#define REP(i,n) FOR(i,0,n)
using namespace std;

typedef complex<double> xy_t;
double cross_product(xy_t a, xy_t b){ return (conj(a) * b).imag(); }

int main(){
    xy_t V[3],P;
    double x,y,cp[3];
    while(cin >> x >> y){
        REP(i,3){
            V[i] = xy_t(x,y);
            cin >> x >> y;
        }
        P = xy_t(x,y);
        cp[0] = cross_product(V[0] - P, V[1] - P);
        cp[1] = cross_product(V[1] - P, V[2] - P);
        cp[2] = cross_product(V[2] - P, V[0] - P);
        if(cp[0] * cp[1] > 0 && cp[1] * cp[2] > 0) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}