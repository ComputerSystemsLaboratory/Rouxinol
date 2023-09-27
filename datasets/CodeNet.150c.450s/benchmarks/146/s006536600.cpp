#include<cstdio>
#include<cmath>
#include<complex>
#include<string>
#include<map>
#include<iostream>
using namespace std;
typedef complex<double> xy_t;
const double eps=1e-11;
double x[4],y[4];
int N;

int main(){
  cin>>N;
  for(int t=0;t<N;t++){
    for(int i=0;i<4;i++)
      cin >> x[i] >> y[i];
    xy_t a[2]={
      xy_t(x[0],y[0])-xy_t(x[1],y[1]),
      xy_t(x[2],y[2])-xy_t(x[3],y[3])};
    bool p = abs((conj(a[0])*a[1]).imag()) < eps;
    cout << (p ? "YES" : "NO") <<endl;
  }
  return 0;

}