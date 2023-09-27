#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define ALL(v) v.begin(), v.end()
typedef long long ll;

#include <bits/stdc++.h>
using namespace std;

int main() { 
  int M[101][101];
  int P[100];
  rep(i,101){
    rep(j,101) M[i][j]=1e9;
  }
  
  int n;
  cin>>n;
  
  rep(i,n) cin>>P[i]>>P[i+1];
  for(int i=1;i<=n;i++) M[i][i]=0;
  
  for(int l=2;l<=n;l++){
    for(int i=1;i<=n-l+1;i++){
      int j=i+l-1;
      for(int k=i;k<j;k++){
        M[i][j]=min(M[i][j],M[i][k]+M[k+1][j]+P[i-1]*P[k]*P[j]);
      }
    }
  }
  
  cout<<M[1][n]<<endl;
  
  return 0;
}
