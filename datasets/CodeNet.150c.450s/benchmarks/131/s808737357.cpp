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
  int a,n;
  while(cin>>a>>n){
    if(a==0&&n==0)break;
    map<int,int> mp;
    int order=0;
    mp[a]=order++;
    if(a==0){
       cout<<0<<' '<<0<<' '<<1<<endl;
    }else{
      while(1){
        string s=to_string(a);
        if(s.size()<n){
          int tmp=n-s.size();
          while(tmp--)s='0'+s;
        }
        sort(ALL(s));
        string mins=s;
        reverse(ALL(s));
        string maxs=s;
        int maxi=stoi(maxs),mini=stoi(mins),nw=maxi-mini;
        auto itr=mp.find(nw);
        if(itr==mp.end()){
          mp[nw]=order++;
        }else{
          cout<<itr->SC<<' '<<itr->FR<<' '<<order-itr->SC<<endl;
          break;
        }
        a=nw;
      }
    }
  }
  return 0;
}

