#include<bits/stdc++.h>
using namespace std;

// macro
#define rep(i,n) for(i=0;i<n;i++)
#define ll long long
#define all(v) v.begin(), v.end()

// code starts
#define INF 2030405060

int main()
{
  int n,m;cin>>n>>m;
  int i,j,k;
  vector<int> s(m);
  vector<int> t(m);
  vector<int> d(m);
  rep(i,m)cin>>s[i]>>t[i]>>d[i];
  vector<vector<int>> g(n,vector<int>(n,INF));
  rep(i,n)g[i][i]=0;
  rep(i,m)
  {
    g[s[i]][t[i]]=d[i];
  }
  rep(k,n)
  {
    rep(i,n)
    {
      rep(j,n)
      {
        if(g[i][k]==INF||g[k][j]==INF)continue;
        g[i][j]=min(g[i][j],g[i][k]+g[k][j]);
      }
    }
  }
  bool ch=false;
  rep(i,n)
  {
    if(g[i][i]<0)
    {
      ch=true;
    }
  }
  if(ch)cout<<"NEGATIVE CYCLE"<<endl;
  else
  {
    rep(i,n)
    {
      rep(j,n)
      {
        if(j!=0)cout<<' ';
        if(g[i][j]==INF)cout<<"INF";
        else cout<<g[i][j];
      }
      cout<<endl;
    } 
  }
}

