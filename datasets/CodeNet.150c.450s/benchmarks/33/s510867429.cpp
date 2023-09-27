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

int x, y, s;

bool input(){
  cin>>x>>y>>s;
  return x|y|s;
}

void solve(){
  int m=0;
  FOR(i, 1, s) {
    FOR(j, 1, s) {
      int a=i*(100+x)/100;
      a+=j*(100+x)/100;
      if(a==s) {
      int b=i*(100+y)/100;
      b+=j*(100+y)/100;
      m = max(m, b);
      }

    }
  }
  cout<<m<<endl;
}

int main(){
  cin.tie(0);
  
  while (input()){
      solve();
  }
  
  return 0;
}