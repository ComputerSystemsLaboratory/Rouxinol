#include<iostream>
#define DFF 1e-10
using namespace std;
int main(){
  int n;
  cin >>n;
  while(n--){
    double p[4][2],ans;
    for(int i=0; i<4; i++) for(int j=0; j<2; j++) cin >>p[i][j];
    for(int i=0; i<2; i++) for(int j=0; j<2; j++) p[i*2+1][j]-=p[i*2][j];
    ans = p[1][0]*p[3][1]-p[1][1]*p[3][0];
    if(ans>-DFF && ans<DFF) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
  }
  return 0;
}