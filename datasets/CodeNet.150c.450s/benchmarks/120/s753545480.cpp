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
using namespace std;
int n,m;
int solve(vector<vector<int> >in,int a){
  int j=0;
  while(a){
    if(a&1)rep(i,m)in[j][i]^=1;
    a>>=1;
    j++;
  }
  int sum=0;
  rep(i,m){
    int co=0;
    rep(j,n)if(in[j][i])co++;
    co=max(co,n-co);
    sum+=co;
  }
  return sum;
}
int main(){
  while(cin>>n>>m,n||m){
    vector<vector<int> >in(n,vector<int>(m));
    rep(i,n)rep(j,m)cin>>in[i][j];
    int out=0;
    rep(i,1<<n){
      out=max(out,solve(in,i));
    }
    cout<<out<<endl;
  }
}