#include<bits/stdc++.h>
#define REP(i,n) for(int i=0;i<n;i++)
#define LOOP(i,x,n) for(int i=x;i<n;i++)
#define ALL(v) (v).begin(),(v).end()
#define PB push_back
#define MP make_pair
#define FR first
#define SC second
#define int long long
using namespace std;
const int MOD=1000000007;
const int INF=9000000009;

signed main(){
  map<string,int> mp;
  string s;
  getline(cin,s);
  string maxsent="";
  vector<int> p;
  REP(i,s.size())if(s[i]==' ')p.PB(i);
  int h=0;
  for(int i=0;i<p.size()+1;i++){
    string t;
    t=s.substr(h,p[i]-h);
    h=p[i]+1;
    mp[t]++;
    if(maxsent.size()<t.size())maxsent=t;
  }
  string mostsent;
  int mode=0;
  for(auto x:mp){
    if(x.SC>mode){
      mode=x.SC;
      mostsent=x.FR;
    }
  }
  cout<<mostsent<<' '<<maxsent<<endl;
  return 0;
}

