#include<iostream>
using namespace std;
int main(){
  double a[2],b[2],c[2],x[2],m[2][2],ans[2],inv[2][2],det,s,t;
  while(cin >>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>x[0]>>x[1]){
    m[0][0] = b[0]-a[0];
    m[1][0] = b[1]-a[1];
    m[0][1] = c[0]-a[0];
    m[1][1] = c[1]-a[1];
    ans[0] = x[0]-a[0];
    ans[1] = x[1]-a[1];
    det = m[0][0]*m[1][1]-m[0][1]*m[1][0];
    inv[0][0] = m[1][1]/det;
    inv[0][1] = -m[0][1]/det;
    inv[1][0] = -m[1][0]/det;
    inv[1][1] = m[0][0]/det;
    s = ans[0]*inv[0][0]+ans[1]*inv[0][1];
    t = ans[0]*inv[1][0]+ans[1]*inv[1][1];
    if(s>0 && t>0 && s+t<1){cout <<"YES"<<endl;}
    else{cout <<"NO"<<endl;}
  }
  return 0;
}