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
  int n,m;
  while(cin>>n>>m,n){
    vector<int> taro(n),hana(m);
    int t=0,h=0;
    REP(i,n){
      cin>>taro[i];
      t+=taro[i];
    }
    REP(i,m){
      cin>>hana[i];
      h+=hana[i];
    }
    vector<pair<int,pair<int,int>>> ans;
    bool f=false;
    bool odd=(abs(t-h)%2==1?true:false);
    if(t>=h){
      int tmp=(t-h)/2;
      REP(i,n){
        REP(j,m){
          if(taro[i]-tmp==hana[j]){
            //cout<<i<<' '<<j<<endl;
            ans.PB(MP(taro[i]+hana[j],MP(taro[i],hana[j])));
            f=true;
          }
        }
      }
    }else{
      int tmp=(h-t)/2;
      REP(i,m){
        REP(j,n){
          if(hana[i]-tmp==taro[j]){
            ans.PB(MP(taro[j]+hana[i],MP(taro[j],hana[i])));
            f=true;
          }
        }
      }
    }
    sort(ALL(ans));
    if(f&&!odd)cout<<ans[0].SC.FR<<' '<<ans[0].SC.SC<<endl;
    else cout<<-1<<endl;
  }
  return 0;
}

