#include<iostream>
#include<complex>
using namespace std;
typedef complex<double> xy_t;
double x[4],y[4];
xy_t d[4];
double a[3]; 
double cross_product(xy_t a,xy_t b){
  return (conj(a)*b).imag();
}
int main(){
  while(1){
    for(int i=0;i<4;i++)cin>>x[i]>>y[i];
    if(!cin)break;
    for(int i=0;i<4;i++)d[i]=xy_t(x[i],y[i]);
    for(int i=0;i<3;i++){
      a[i]=cross_product(d[3]-d[i],d[3]-d[(i+1)%3]);
    }
    if(a[0]<0&&a[1]<0&&a[2]<0){
      cout<<"YES"<<endl;
    }else if(a[0]>0&&a[1]>0&&a[2]>0){
      cout<<"YES"<<endl;
    }else{
      cout<<"NO"<<endl;
    }
  }
}