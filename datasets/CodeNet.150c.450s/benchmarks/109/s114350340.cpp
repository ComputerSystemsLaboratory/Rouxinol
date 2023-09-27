#include <bits/stdc++.h>
#include<algorithm>
#define int long long
using namespace std;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define INF 1000000000000
int MOD=1000000007;

signed main() {
int tt;
cin>>tt;
while(tt){
  vector<int> byou(86401);
  rep(i,tt){
    string t1,t2;
    cin>>t1>>t2;
    int iri,de;
    iri=(((int)t1[0]-48)*10+((int)t1[1]-48))*3600+(((int)t1[3]-48)*10+(int)t1[4]-48)*60+((int)t1[6]-48)*10+(int)t1[7]-48;
    de=(((int)t2[0]-48)*10+((int)t2[1]-48))*3600+(((int)t2[3]-48)*10+(int)t2[4]-48)*60+((int)t2[6]-48)*10+(int)t2[7]-48;
    byou[iri]++;
    byou[de]--;
  }
  vector<int>s(86402);
int tmax=0;
  rep(i,86401){
    s[i+1]=s[i]+byou[i];
    tmax=max(tmax,s[i+1]);
  }

  cout<<tmax<<endl;
  cin>>tt;
}
}

