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
const int INF=1000000009;

signed main(){
  int n;
  while(cin>>n,n){
    string s="";
    REP(i,n){
      string t;
      cin>>t;
      s+=t;
    }
    int ans=0;
    if(s.size()<=2)cout<<0<<endl;
    else{
      REP(i,s.size()-3){
        string t=s.substr(i,2);
        string u=s.substr(i+2,2);
        if((t=="lu"&&u=="ru")||(t=="ru"&&u=="lu"))ans++;
        if((t=="ld"&&u=="rd")||(t=="rd"&&u=="ld"))ans++;
      }
      cout<<ans<<endl;
    }
  }
  return 0;
}

