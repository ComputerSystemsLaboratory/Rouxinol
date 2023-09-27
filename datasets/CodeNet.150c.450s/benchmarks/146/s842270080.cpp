#include <iostream>
#include <complex>
using namespace std;

int main(){
  int n;
  cin >> n;

  for(int i=0;i<n;i++){
    complex<long double> v[4];
    for(int j=0;j<4;j++){
      long double x,y;
      cin >> x >> y;
      v[j]=complex<long double>(x,y);
    }

    if((conj(v[1]-v[0])*(v[3]-v[2])).imag()==0.0)
      cout << "YES" << endl;
    else
      cout << "NO" << endl;
  }

  return 0;
}