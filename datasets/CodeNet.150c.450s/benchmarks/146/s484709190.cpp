#include<iostream>
#define dff 1e-10
using namespace std;
int main(){
  int n;
  cin >>n;
  while(n--){
    double p[4][2],x;
    for(int i=0; i<4; i++)
      cin >>p[i][0]>>p[i][1];
    for(int i=0; i<2; i++)
      for(int j=0; j<2; j++)
	p[i*2+1][j]-=p[i*2][j];
    x = p[1][0]*p[3][1]-p[1][1]*p[3][0];
    if(-dff < x && x < dff) cout <<"YES"<<endl;
    else cout <<"NO"<<endl;
  }
  return 0;
}