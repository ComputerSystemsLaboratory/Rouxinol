#include<iostream>
using namespace std;
int main(){
  double p[4][2],m[2][2],inv[2][2],det,x[2];
  while(cin >>p[0][0]>>p[0][1]>>p[1][0]>>p[1][1]>>p[2][0]>>p[2][1]>>p[3][0]>>p[3][1]){
    for(int i=1; i<4; i++) for(int j=0; j<2; j++) p[i][j]-=p[0][j];
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) m[i][j] = p[1+j][i];
    det = m[0][0]*m[1][1]-m[0][1]*m[1][0];
    inv[0][0] = m[1][1]/det;
    inv[0][1] = -m[0][1]/det;
    inv[1][0] = -m[1][0]/det;
    inv[1][1] = m[0][0]/det;
    for(int i=0; i<2; i++) x[i] = inv[i][0]*p[3][0]+inv[i][1]*p[3][1];
    if(x[0]>0 && x[1]>0 && x[0]+x[1]<1) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
  }
  return 0;
}