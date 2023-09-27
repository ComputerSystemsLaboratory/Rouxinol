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

int m, nin, nax;
int p[202];

bool input(){
  cin>>m>>nin>>nax;
  REP(i, m)cin>>p[i];
  return m;
}

void solve(){
  int s=0, b=0;
  FOR(i, nin-1, nax) {
    if(p[i]-p[i+1]>=s){
      b=i+1;
      s=p[i]-p[i+1];
    }
  }
  cout<<b<<endl;
}

int main(){
  cin.tie(0);
  
  while (input()){
      solve();
  }
  
  return 0;
}