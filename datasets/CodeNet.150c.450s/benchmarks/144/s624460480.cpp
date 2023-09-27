#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  int n,m,l;
  cin>>n>>m>>l;
  vector<vector<int> > A(n,vector<int>(m));
  vector<vector<int> > B(m,vector<int>(l));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++)cin>>A[i][j];
  }
  for(int i=0;i<m;i++){
    for(int j=0;j<l;j++)cin>>B[i][j];
  }
  vector<vector<int> > ans(n,vector<int>(l,0));

  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      int tmp=0;
      for(int k=0;k<m;k++){
        tmp+=A[i][k]*B[k][j];
      }
      ans[i][j]=tmp;
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<l;j++){
      cout<<ans[i][j];
      if(j!=l-1)cout<<" ";
    }
    cout<<endl;
  }
}

