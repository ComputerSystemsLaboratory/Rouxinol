#include <iostream>
#include <complex>
#include <cmath>
using namespace std;
constexpr double eps = 1e-11;
using C = complex<double>;

int main(){
  int n;
  cin >> n;
  for(int i=0;i<n;i++){
    C V[4];
    for(int j=0;j<4;j++){
      double x, y;
      cin >> x >> y;
      V[j] = C(x, y);
    }
    C AB = V[1] - V[0];
    C CD = V[3] - V[2];
    double area = (conj(AB) * CD).imag();
    if(abs(area) < eps)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }
}
