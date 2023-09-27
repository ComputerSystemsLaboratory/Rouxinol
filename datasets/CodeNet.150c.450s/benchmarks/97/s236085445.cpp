#include <iostream>
#include <algorithm>
using namespace std;

int dx[] = {-1,0,1,0};
int dy[] = {0,-1,0,1};

int main(){
  int n,pos,d;
  int x[250],y[250];
  int MN,mS,ME,mW;
  while(1){

    cin >> n;
    if(n == 0)break;

      x[0]= y[0] = 0;

    MN = ME = mS = mW = 0;

    for( int i = 1 ; i < n ; i++ ){
 
      cin >> pos >> d;

      x[i] = x[pos] + dx[d];
      y[i] = y[pos] + dy[d];

      MN = max(y[i],MN);
      ME = max(x[i],ME);
      mW = min(x[i],mW);
      mS = min(y[i],mS);
      // cout <<"i: " << i << " x: "<<x[i] << " " <<" y: "<< y[i] << endl;
       }
    cout <<ME-mW+1  << " "<< MN-mS+1<<endl;
  }
  return 0;
}