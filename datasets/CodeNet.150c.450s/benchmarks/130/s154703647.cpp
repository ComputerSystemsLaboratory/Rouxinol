#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int> > A(n,vector<int>(m));
  vector<int> B(m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>A[i][j];
    }
  }
  for(int i=0;i<m;i++)cin>>B[i];

  for(int i=0;i<n;i++){
    int tmp=0;
    for(int j=0;j<m;j++){
      tmp+=A[i][j]*B[j];
    }
    cout<<tmp<<endl;
  }
}

