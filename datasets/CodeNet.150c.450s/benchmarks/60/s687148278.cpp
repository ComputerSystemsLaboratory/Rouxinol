#include<iostream>
using namespace std;
int m[101][101];
int main(){
  cin.tie(0);
  ios::sync_with_stdio(false);
  int n,u,k,v;
  cin>>n;
  for(int i=0;i<n;++i){
    cin>>u>>k;
    u--; //頂点番号をあわせてる
    for(int j=0;j<k;++j){
      cin>>v;
      v--;
      m[u][v]=1;
    }
  }
  for(int i=0;i<n;++i){
    for(int j=0;j<n;++j){
      if(j) cout<<" ";
      cout<<m[i][j];
    }
    cout<<endl;
  }
  return 0;
}

