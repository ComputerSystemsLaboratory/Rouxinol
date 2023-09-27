#include<bits/stdc++.h>
using namespace std;
int a,b,n;
int o[20][20]={{}};
int dfs(int x,int y){
  if(x==a&&y==b) return 1;
  if(x>a||y>b) return 0;
  int res=0;
  if(!o[x+1][y]) res+=dfs(x+1,y);
  if(!o[x][y+1]) res+=dfs(x,y+1);
  return res;
}
int main(){
  while(cin >> a >> b,a||b){ 
    cin >> n;
    memset(o,false,sizeof(o));
    int x,y;
    for(int i=0;i<n;i++){
      cin >> x >> y;
      o[x][y]=true;
    }
    cout << dfs(1,1) << endl;
  }
  return 0;
}