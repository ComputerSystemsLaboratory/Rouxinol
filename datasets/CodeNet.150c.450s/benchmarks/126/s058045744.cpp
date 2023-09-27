#include<bits/stdc++.h>
using namespace std;

int area[18][18];
int a,b,n;
int ans=0;

int saiki(int x,int y){
  //cout << x << ' ' << y << endl;
  if(area[x][y] == -1) return 0;
  if(x == a && y == b) {
    // cout << 'z' << endl;
    return 1;
  }
  ans += saiki(x,y+1);
  ans += saiki(x+1,y);
  return 0;
}

int main(){
  int x,y;
  memset(area,-1,sizeof(area));
  while(1){
    ans=0;
    cin >> a >> b;
    if(a == 0 && b == 0)break;
    for(int i=1;i<=a;i++){
      for(int j=1;j<=b;j++){
	area[i][j]=0;
      }
    }
    cin >> n;
    for(int i=0;i<n;i++){
      cin >> x >> y;
      area[x][y]=-1;
    }
    saiki(1,1);
    cout << ans << endl;
  }
}