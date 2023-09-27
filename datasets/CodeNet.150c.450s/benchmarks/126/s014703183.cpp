#include<iostream>
#include<cstring>

using namespace std;

int dp[16][16];
int a,b;

int solve(int x,int y){
  if(dp[y][x] >= 0) return dp[y][x];
  if(x == a && y==b) return 1;

  if(x > a || y > b)return 0;

  return dp[y][x] = (solve(x+1,y) + solve(x,y+1));

}


int main(){
  // int a,b;
  int n;
  
  while(cin>>a>>b){
    //cin>>a>>b;
    if(a==0 && b==0)return 0;
    a--;
    b--;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(int i = 0;i<n;i++){
      int x,y;
      cin>>x>>y;
      dp[--y][--x] = 0;
    }
  
    cout<<solve(0,0)<<endl;
  }
  return 0;
}