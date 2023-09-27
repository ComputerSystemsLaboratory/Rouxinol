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

int N;

bool input(){
  cin>>N;
  return N;
}

void solve(){
  int c=0;
  for(int i=1;i+i+1<=N;i++) {
    int s=i;
    for(int j=1;s<N;j++) {
      s+=i+j;
    }
    if(s==N)c++;
  }
  cout<<c<<endl;
}

int main(){
  cin.tie(0);
  
  while (input()){
      solve();
  }
  
  return 0;
}