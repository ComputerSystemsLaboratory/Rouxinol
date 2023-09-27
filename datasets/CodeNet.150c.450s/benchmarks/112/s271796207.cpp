#include <iostream>
#include <cassert>
#define REP(i,l,n) for(int i=l;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define MAX 100000
char pre[MAX],post[MAX],ans;
int n,m;
using namespace std;
int main() {
  while(1){
    cin >> n;
    if(n==0) return 0;
    rep(i,n){
      cin >> pre[i];
      cin >> post[i];
    }
    cin >> m;
    rep(i,m){
      cin >> ans;
      rep(j,n){
        if(pre[j] == ans){
          ans = post[j];
          break;
        }
      }
      cout << ans;
    }
    cout << endl;
  }
  return 0;
}