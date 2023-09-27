#include<iostream>
#include<cmath>
#include<algorithm>
#include<vector>
#include<queue>

using namespace std;

vector<int> R;
vector<int> C;
vector<vector<int>> dp;

long long int rec(int l,int r){
  if(dp[l][r]!=-1) return dp[l][r];
  if(abs(r-l)<=1)return 0;
  long long int res=10000007;
  for(int mid=l+1;mid<r;mid++){
    res=min(res,rec(l,mid)+rec(mid,r)+R[l]*C[mid-1]*C[r-1]);
  }
  return dp[l][r]=res;
}

int main(){

  int n;
  cin >> n;

  dp.resize(n+1);
  for(int i=0;i<n+1;i++)dp[i].resize(n+1);

  for(int i=0;i<n+1;i++){
    for(int j=0;j<n+1;j++){
      dp[i][j]=-1;
    }
  }

  R.resize(n);
  C.resize(n);
  for(int i=0;i<n;i++)cin >> R[i] >> C[i];

  int c=rec(0,n);

  cout << c << endl;


}
