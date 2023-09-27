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
  vector<int>in(m);
  rep(i,m)cin>>in[i];
  sort(all(in));
  vector<int>out(n+1);
  rep(i,n+1)out[i]=INF;
  out[0]=0;
  rep(i,m){
    loop(j,in[i],n+1)
      out[j]=min(out[j],out[j-in[i]]+1);
  }
  cout<<out[n]<<endl;
}