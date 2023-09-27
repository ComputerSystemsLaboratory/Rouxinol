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

int N, A, B, C, X;
int y[102];

bool input(){
  cin>>N>>A>>B>>C>>X;
  REP(i, N)cin>>y[i];
  return N|A|B|C|X;
}

void solve(){
  int c=0, f=0;
  REP(i, 10001) {
    if(y[c]==X)c++;
    if(c==N)break;
    X = (A*X+B)%C;
    f++;
  }
  if(c<N)cout<<-1<<endl;
  else cout<<f<<endl;
}

int main(){
  cin.tie(0);
  
  while (input()){
      solve();
  }
  
  return 0;
}