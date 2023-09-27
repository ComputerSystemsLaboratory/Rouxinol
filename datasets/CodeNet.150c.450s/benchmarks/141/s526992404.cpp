//23
#include<iostream>
#include<complex>

using namespace std;

int main(){
  for(;;){
    complex<double> p[4];
    for(int i=0;i<4;i++){
      double x,y;
      if(!(cin>>x>>y))return 0;
      p[i]=complex<double>(x,y);
    }
    int s=0;
    for(int i=0;i<3;i++){
      complex<double> e=p[(i+1)%3]-p[i],c=p[3]-p[i];
      s|=(e.real()*c.imag()-e.imag()*c.real()>0)<<i;
    }
    cout<<((s==0||s==7)?"YES":"NO")<<endl;
  }
  return 0;
}