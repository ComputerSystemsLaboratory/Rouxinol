#include<iostream>
using namespace std;
int main(){
  double x[2],y[2],z[2],p[2];
  while(cin >>x[0]>>x[1]>>y[0]>>y[1]>>z[0]>>z[1]>>p[0]>>p[1]){
    double v[3][2],vp[3][2];
    v[0][0] = y[0]-x[0];
    v[0][1] = y[1]-x[1];
    v[1][0] = z[0]-y[0];
    v[1][1] = z[1]-y[1];
    v[2][0] = x[0]-z[0];
    v[2][1] = x[1]-z[1];
    vp[0][0] = p[0]-x[0];
    vp[0][1] = p[1]-x[1];
    vp[1][0] = p[0]-y[0];
    vp[1][1] = p[1]-y[1];
    vp[2][0] = p[0]-z[0];
    vp[2][1] = p[1]-z[1];
    int n=0;
    for(int i=0; i<3; i++){
      if(v[i][0]*vp[i][1]-v[i][1]*vp[i][0]<0) n--;
      else n++;
    }
    if(n == 3 || n == -3) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
  }
  return 0;
}