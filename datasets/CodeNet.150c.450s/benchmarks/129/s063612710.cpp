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
int main(){
  int a,b;
  cin>>a>>b;
  vector<vector<int> >in(a+1);
  rep(i,a)rep(j,b){
    int tmp;cin>>tmp;
    in[i].pb(tmp);
  }
  rep(i,b){
    int sum=0;
    rep(j,a)sum+=in[j][i];
    in[a].pb(sum);
  }
  rep(i,a+1){
    int sum=0;
    rep(j,b)sum+=in[i][j];
    in[i].pb(sum);
  }

  rep(i,a+1){
    bool h=false;
    rep(j,b+1){
      if(h)cout<<" ";
      cout<<in[i][j];
      h=true;
    }
    cout<<endl;
  }
}