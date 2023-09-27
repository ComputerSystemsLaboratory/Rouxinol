#include<bits/stdc++.h>
using namespace std;
int maps[17][17];
int cnt(int x,int y);
int main(){
  while(1){
    int a,b,n,x,y;
    cin >> a >> b;
    if(a == 0 && b== 0)break;
    for(int i=0;i<17;i++){
      for(int j=0;j<17;j++){
	maps[i][j] = 0;
      }
    }
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> x >> y;
      maps[x][y] = -1;
    }
    for(int i=0;i<a+1;i++){
      maps[i][0]= -1;
    }
    for(int i=0;i<b+1;i++){
      maps[0][i]=-1;
    }
    int ans = cnt(a,b);
    cout << ans << endl;
  }
}
int cnt(int x,int y){
  if(maps[x][y]== -1)return 0;
  else if(x == 1 && y == 1) return 1;
  
  return (cnt(x-1,y) + cnt(x,y-1));
}