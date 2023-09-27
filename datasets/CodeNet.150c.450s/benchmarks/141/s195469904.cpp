#include<iostream>
using namespace std;
int main(){
  double a[2],b[2],c[2],m[2][2],inv[2][2],det,ans[2],s,t;
  while(cin >>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>ans[0]>>ans[1]){
    b[0]-=a[0];
    b[1]-=a[1];
    c[0]-=a[0];
    c[1]-=a[1];
    ans[0]-=a[0];
    ans[1]-=a[1];
    m[0][0] = b[0];
    m[1][0] = c[0];
    m[0][1] = b[1];
    m[1][1] = c[1];
    det = m[0][0]*m[1][1]-m[1][0]*m[0][1];
    inv[0][0] = m[1][1]/det;
    inv[1][0] = -m[1][0]/det;
    inv[0][1] = -m[0][1]/det;
    inv[1][1] = m[0][0]/det;
    s = ans[0]*inv[0][0]+ans[1]*inv[1][0];
    t = ans[0]*inv[0][1]+ans[1]*inv[1][1];
    if(s>0 && t>0 && s+t<1){cout <<"YES\n";}
    else{cout <<"NO\n";}
  }
  return 0;
}