#include<iostream>
using namespace std;
int main(){
  double a[2],b[2],c[2],r[2];
  while(cin >>a[0]>>a[1]>>b[0]>>b[1]>>c[0]>>c[1]>>r[0]>>r[1]){
    b[0]-=a[0];
    c[0]-=a[0];
    r[0]-=a[0];
    b[1]-=a[1];
    c[1]-=a[1];
    r[1]-=a[1];
    double m[2][2],ans[2],rev[2][2];
    m[0][0] = b[0];
    m[0][1] = c[0];
    m[1][0] = b[1];
    m[1][1] = c[1];
    ans[0] = r[0];
    ans[1] = r[1];
    double det = m[0][0]*m[1][1]-m[0][1]*m[1][0];
    rev[0][0] = m[1][1]/det;
    rev[0][1] = -m[0][1]/det;
    rev[1][0] = -m[1][0]/det;
    rev[1][1] = m[0][0]/det;
    double s = ans[0]*rev[0][0]+ans[1]*rev[0][1];
    double t = ans[0]*rev[1][0]+ans[1]*rev[1][1];
    if(s>0 && t>0 &&s+t<1){cout <<"YES"<<endl;}
    else{cout <<"NO"<<endl;}
  }
  return 0;
}