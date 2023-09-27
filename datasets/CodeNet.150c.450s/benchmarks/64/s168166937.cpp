#include <iostream>

#define N_MAX 100
#define M_MAX 100000
#define NIL -1

using namespace std;

int n;
int a[N_MAX],dp[N_MAX][M_MAX];

//can make m after a[i] or not
bool solve(int i,int m){
  if(dp[i][m]!=NIL) return dp[i][m];
  if(m==0){
    dp[i][m]=1;
  }else if(i>=n){
    dp[i][m]=0;
  }else if(solve(i+1,m)){
    dp[i][m]=1;
  }else if(solve(i+1,m-a[i])){
    dp[i][m]=1;
  }else{
    dp[i][m]=0;
  }
  return dp[i][m];
}

int main(){
  cin >> n;
  for(int i=0;i<n;i++){
    for(int j=0;j<=M_MAX;j++){
      dp[i][j]=NIL;
    }
  }
  for(int i=0;i<n;i++) cin >> a[i];
  int q; cin >> q;
  for(int i=0;i<q;i++){
    int x; cin >> x;
    if(solve(0,x)) cout << "yes" << endl;
    else cout << "no" << endl;
  }
}