#include <iostream>
#include <algorithm>
using namespace std;

#define REP(i,n,m) for(int i=n;i<m;i++)
#define rep(i,n) REP(i,0,n)

int n,m;
int t[102],s[102];
int sumT,sumS;

void solve(){
  int ti=0,si=0;

  while(ti < n && si < m){
    int swapT = sumT - t[ti] + s[si];
    int swapS = sumS - s[si] + t[ti];
    if(swapT == swapS){
      cout<<t[ti]<<" "<<s[si]<<endl;
      return;
    }

    if(si == m-1 || swapS < swapT && ti != n-1){
      ti++;
    }
    else{
      si++;
    }
  }
  cout<<-1<<endl;
}

int main(){
  while(cin>>n>>m,n||m){
    sumT = sumS = 0;
    rep(i,n){
      cin>>t[i];
      sumT += t[i];
    }
    rep(i,m){
      cin>>s[i];
      sumS += s[i];
    }

    sort(t,t+n);
    sort(s,s+m);

    solve();
  }
}