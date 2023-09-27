#include<iostream>
#include<vector>
using namespace std;

int main(){
  vector< vector<int> > m;
  vector<int> v;
  int i,j;
  int a,b;
  vector<int> ans;

  cin>>a>>b;

  m.resize(a);
  for(i=0;i<a;i++){
    m[i].resize(b);
  }
  v.resize(b);
  ans.resize(a);

  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      cin>>m[i][j];
    }
  }

  for(i=0;i<b;i++){
    cin>>v[i];
  }

  for(i=0;i<a;i++){
    for(j=0;j<b;j++){
      ans[i]+=m[i][j]*v[j];
    }
  }

  for(i=0;i<a;i++){
    cout<<ans[i]<<endl;
  }

  return 0;
}