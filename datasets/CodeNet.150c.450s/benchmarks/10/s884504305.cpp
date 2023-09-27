#include "bits/stdc++.h"
using namespace std;
#define int long long
int mod=1e9+7;

signed main(){
  int n;
  cin>>n;
  vector<vector<vector<int> > > ans(10,vector<vector<int> >(3,vector<int>(4,0)));
  for(int i=0;i<n;i++){
    int b,f,r,v;
    cin>>b>>f>>r>>v;
    b--;
    f--;
    r--;
    ans[r][f][b]+=v;
  }
  for(int i=0;i<4;i++){
    for(int j=0;j<3;j++){
      for(int k=0;k<10;k++){
        cout<<" "<<ans[k][j][i];
      }
      cout<<endl;
    }
    if(i!=3)cout<<"####################"<<endl;
  }
}

