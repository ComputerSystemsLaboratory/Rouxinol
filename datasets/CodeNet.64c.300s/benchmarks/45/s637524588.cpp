#include<algorithm>
#include<iostream>

using namespace std;

#define FOR(i,a,b) for(int i=(a);i<(b);i++)
#define REP(i,n) FOR(i,0,(n))
#define MAX_N 105

int N,M,P;
int x[MAX_N];

bool input(){
  REP(i,MAX_N)x[i]=0;
  cin>>N>>M>>P;

  REP(i,N)cin>>x[i];

  return (N!=0);
}

void solve(){
  int total=0;
  REP(i,N)total+=x[i];
  total*=(100-P);
  if(x[M-1]==0)cout<<0<<endl;
  else {
    int ans=total/x[M-1];
  cout<<ans<<endl;
  }
}
int main(){
  while(input())solve();
  return 0;
}