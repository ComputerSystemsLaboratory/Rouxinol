#include <iostream>
#include <complex>
using namespace std;
using C = complex<double>;

int main(){
  C v[4];
  double x[4], y[4];
  while(cin >> x[0] >> y[0]){
    v[0] = C(x[0], y[0]);
    for(int i=1;i<4;i++){
      cin >> x[i] >> y[i];
      v[i] = C(x[i], y[i]);
    }
    C PA = v[0] - v[3], PB = v[1] - v[3], PC = v[2] - v[3];
    double pab = (conj(PA) * PB).imag(), pbc = (conj(PB) * PC).imag(), pca = (conj(PC) * PA).imag();
    if(pab * pbc > 0 && pbc * pca > 0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
