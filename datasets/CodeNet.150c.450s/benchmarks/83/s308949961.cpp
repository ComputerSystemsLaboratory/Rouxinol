#include<iostream>
#include<string>
#include<algorithm>
#include<map>
#include<set>
#include<utility>
#include<vector>
#include<cmath>
#include<cstdio>
#define loop(i,a,b) for(int i=a;i<b;i++) 
#define rep(i,a) loop(i,0,a)
#define pb push_back
#define mp make_pair
#define it ::iterator
#define all(in) in.begin(),in.end()
const double PI=acos(-1);
const double ESP=1e-10;
const double INF=1e9;
using namespace std;
int main(){
  int n,m;
  cin>>n>>m;
  vector<vector<int> >out(n+1);
  rep(i,m+1)out[0].pb(0);
  loop(i,1,n+1){
    int a,b;
    cin>>a>>b;
    loop(j,0,m+1){
      if(j-b>=0)out[i].pb(max(out[i-1][j],out[i-1][j-b]+a));
      else out[i].pb(out[i-1][j]);
    }
  }
  cout<<out[n][m]<<endl;
}