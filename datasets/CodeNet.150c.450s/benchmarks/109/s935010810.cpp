#include <bits/stdc++.h>
#include <math.h>
#include <vector>
#include <queue>
#include <iomanip>
#include <string>
#include <algorithm>
using namespace std;
#define rep(i,n) for(int i=0;i<n;i++)
#define rep_1 (i,j,n) for(int i=j;i<n;i++)
typedef long long ll;
typedef long l;
const ll l_INF = 1010101010101010;
const int INF = 1010101010;
const int dx[] = {-1,0,1,0,-1,-1,1,1};
const int dy[] = {0,-1,0,1,1,-1,1,-1};

int main(){
  while(true){
    int n; cin>>n;
    if(n==0) return 0;
    vector<int> t(400000);
    rep(i,n){
      string s,e; cin>>s>>e;
      int t0=0,t1=0;
      t0+=(s[0]-'0')*36000+(s[1]-'0')*3600+(s[3]-'0')*600+(s[4]-'0')*60+(s[6]-'0')*10+(s[7]-'0');
      t1+=(e[0]-'0')*36000+(e[1]-'0')*3600+(e[3]-'0')*600+(e[4]-'0')*60+(e[6]-'0')*10+(e[7]-'0');
      t[t0]++; t[t1]--;
    }
    rep(i,370000) t[i+1]+=t[i];
    int ans=0;
    rep(i,370000) ans=max(ans,t[i]);
    cout<<ans<<endl;
  }
}

