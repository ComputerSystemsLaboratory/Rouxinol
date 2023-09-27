#include<iostream>
#include<vector>
#include<cstdio>
using namespace std;
int judge(int i,int n,int variable,vector< vector<int> > &v)
{
  for(int j=0;j<v[variable].size();++j){
    if(i==v[variable][j]){
      return 1;
      break;
    }
  }
  return 0;
}
int main()
{
  int n,u,k,vv;
  cin>>n;
  vector< vector<int> > v(n),a(n,vector<int>(n));
  for(int variable=0;variable<n;++variable){
    cin>>u>>k;
    for(int i=0;i<k;++i){
      cin>>vv;
      v[variable].push_back(vv);
    }
  }
  for(int variable=0;variable<n;++variable)
    for(int i=1;i<=n;++i)
      a[variable][i-1]=judge(i,n,variable,v);
  for(int variable=0;variable<n;++variable){
    for(int i=0;i<n;++i){
        printf("%d%c", a[variable][i], i == n - 1 ? '\n' : ' ');
    }
  }
    return 0;
}