#if 1
  #include <bits/stdc++.h>
#else
  #include "../../bits/stdc++.h"
#endif

#define FOR(i,a,b) for(int i = (a);i < (b);i++)
#define RFOR(i,a,b) for(int i = (b)-1;i >= (a);i--)
#define REP(i,n) FOR(i,0,(n))
#define RREP(i,n) RFOR(i,0,(n))

using namespace std;

typedef pair<int, int> P;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second

#define MAX_N 102

int n, m;
int t[MAX_N], h[MAX_N];

bool input(){
  cin>>n>>m;
  REP(i, n)cin>>t[i];
  REP(i, m)cin>>h[i];
  return n|m;
}

void solve(){
  int st=0, sh=0, a;
  int pt=-1, ph=-1;
  REP(i, n)st+=t[i];
  REP(i, m)sh+=h[i];
  if((st+sh)%2) {
    cout<<-1<<endl;
    return ;
  }
  a = (st+sh)/2;
  REP(i, n) {
    REP(j, m) {
      if((st-t[i]+h[j])==a) {
        if(pt<0) {
          pt=t[i];
          ph=h[j];
        }else {
          if(pt+ph>t[i]+h[j]) {
            pt=t[i];
            ph=h[j];
          }
        }
      }
    }
  }
  if(pt<0) {
    cout<<-1<<endl;
    return ;
  }
  cout<<pt<<' '<<ph<<endl;
}

int main(){
  cin.tie(0);
  
  while (input()){
      solve();
  }
  
  return 0;
}