//41
#include<iostream>
#include<complex>

using namespace std;

int main(){
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
    complex<double> p[2];
    for(int j=0;j<2;j++){
      double x,xx,y,yy;
      cin>>x>>y>>xx>>yy;
      p[j]=complex<double>(x-xx,y-yy);
    }
    cout<<((p[0].real()*p[1].imag()-p[0].imag()*p[1].real())?"NO":"YES")<<endl;
  }
  return 0;
}