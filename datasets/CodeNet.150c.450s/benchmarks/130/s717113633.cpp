#include<bits/stdc++.h>
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  int a[101][101],b[101];
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      cin>>a[i][j];
    }
  }
  for(int i=0;i<m;i++){
    cin>>b[i];
  }
  vector<int> ans(1001,0);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      ans[i]+=a[i][j]*b[j];
    }
  }
  for(int i=0;i<n;i++)cout<<ans[i]<<endl;
  return 0;
}