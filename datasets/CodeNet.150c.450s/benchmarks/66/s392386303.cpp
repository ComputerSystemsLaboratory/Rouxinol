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

int N, M;
char U[258][12], T[258][12];

void input(){
  cin>>N;
  REP(i, N)cin>>U[i];
  cin>>M;
    REP(i, M)cin>>T[i];
}

void solve(){
  bool d=true;
  REP(i, M) {
    bool c = false;
    REP(j, N) {
      c = [](int x, int y) {
        int k;
        if(U[x][0]!=T[y][0])return false;
        for(k=1;U[x][k-1]!='\0';k++) {
          if(U[x][k]!=T[y][k])return false;
        }
        return true;
      }(j, i);
      if(c) {
        if(d)cout<<"Opened by "<<T[i];
        else cout<<"Closed by "<<T[i];
        d = !d;
        break;
      }
    }
    if(!c)cout<<"Unknown "<<T[i];
    cout<<endl;
  }
}

int main(){
  cin.tie(0);

  input();
  solve();

  return 0;
}