#include<bits/stdc++.h>
using namespace std;
#define inf 1e9
#define ll long long
#define ull unsigned long long
#define M 1000000007
#define P pair<int,int>
#define PLL pair<ll,ll>
#define FOR(i,m,n) for(int i=m;i<n;i++)
#define RFOR(i,m,n) for(int i=m;i>=n;i--)
#define rep(i,n) FOR(i,0,n)
#define rrep(i,n) RFOR(i,n,0)
#define all(a) a.begin(),a.end()
const int vx[4] = {0,1,0,-1};
const int vy[4] = {1,0,-1,0};
#define PI 3.14159265


void f(){
  string s;
  cin>>s;
  map<string,bool> mp;
  rep(i,s.size()){
    string t,u;
    rep(j,i){
      t += s[j];
    }
    FOR(j,i,s.size()){
      u += s[j];
    }
    mp[t+u] = true;
    mp[u+t] = true;
    reverse(all(t));
    mp[t+u] = true;
    mp[u+t] = true;
    reverse(all(u));
    mp[t+u] = true;
    mp[u+t] = true;
    reverse(all(t));
    mp[t+u] = true;
    mp[u+t] = true;
  }
  cout<<mp.size()<<endl;
}


int main(){
  int n;
  cin>>n;
  rep(i,n){
    f();
  }

  return 0;
}
