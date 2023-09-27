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
char f[102][3];

bool input(){
  cin>>n;
  REP(i, n)cin>>f[i];
  return n;
}

void solve(){
  int t=0, s=0;
  int r=0, l=0;
  REP(i, n) {
    if(f[i][0] == 'l') {
      if(f[i][1] == 'u')l++;
      else l--;
    }else {
      if(f[i][1] == 'u')r++;
      else r--;
    }
    if(r==l && s!=r) {
      t++;
      s=r;
    }
  }
  cout<<t<<endl;
}

int main(){
  cin.tie(0);
  
  while (input()){
      solve();
  }
  
  return 0;
}