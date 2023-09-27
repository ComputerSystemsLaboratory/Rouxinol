#include<iostream>
using namespace std;
int main(){
  double p[4][2];
  while(cin>>p[0][0]>>p[0][1]){
    for(int i=1; i<4; i++)
      for(int j=0; j<2; j++)
	cin >>p[i][j];
    for(int i=1; i<4; i++)
      for(int j=0; j<2; j++)
	p[i][j]-=p[0][j];
    double det,im[2][2],s[2];
    det = p[1][0]*p[2][1]-p[1][1]*p[2][0];
    im[0][0] = p[2][1]/det;
    im[1][0] = -p[1][1]/det;
    im[0][1] = -p[2][0]/det;
    im[1][1] = p[1][0]/det;
    for(int i=0; i<2; i++)
      s[i] = im[i][0]*p[3][0]+im[i][1]*p[3][1];
    if(s[0]>0 && s[1]>0 && s[0]+s[1]<1) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
  }
  return 0;
}