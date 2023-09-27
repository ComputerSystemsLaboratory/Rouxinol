#include <iostream>
using namespace std;

#define REP(i,n,m) for(int i=n;i<m;i++)
#define rep(i,n) REP(i,0,n)

int cnt[52];

int main(void){
  rep(i,10)rep(j,10)rep(k,10)rep(l,10)cnt[i+j+k+l]++;

  int x;
  while(cin>>x){
    cout<<cnt[x]<<endl;
  }

  return 0;
}