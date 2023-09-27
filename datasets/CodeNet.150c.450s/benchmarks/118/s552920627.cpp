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

int n;
int y, m, d;

void input(){
  cin>>y>>m>>d;
}

void solve(){
  int s=0;
  FOR(i, 1, y) {
    if(i%3==0)s+=200;
    else s+=195;
  }
  FOR(i, 1, m) {
    if(y%3!=0&&i%2==0)s+=19;
    else s+=20;
  }
  s+=d-1;
  cout<<196470-s<<endl;
}

int main(){
  cin.tie(0);
  
  cin>>n;
  REP(i, n){
    input();
    solve();
  }
  
  return 0;
}