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
int a[1002];

bool input(){
  cin>>n;
  REP(i, n)cin>>a[i];
  return n;
}

void solve(){
  int d=abs(a[0]-a[1]);
  REP(i, n) {
    FOR(j, i+1, n) {
      d = min(d, abs(a[i]-a[j]));
    }
  }
  cout<<d<<endl;
}

int main(){
  cin.tie(0);
  
  while (input()){
      solve();
  }
  
  return 0;
}