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

//typedef pair<int, int> P;
#define pb push_back
#define mp make_pair
#define ft first
#define sd second

int N, M, P;
int x[102];

bool input(){
  cin>>N>>M>>P;
  REP(i, N)cin>>x[i];
  return N|M|P;
}

void solve(){
  int s=0;
  REP(i, N)s+=x[i];
  int res=s*(100-P);
  if(x[M-1]==0) {
    cout<<0<<endl;
    return ;
  }
  res /= x[M-1];
  cout<<res<<endl;
}

int main(){
  cin.tie(0);
  
  while (input()){
      solve();
  }
  
  return 0;
}