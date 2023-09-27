#include <iostream>
#define REP(i,s,n) for(int i=s;i<n;++i)
#define rep(i,n) REP(i,0,n)
#define MAX 10000
using namespace std;
int ans,cou;
int n;
char s[10],g[10];
struct t {
  int h;
  int m;
  int s;
};
t start[MAX],goal[MAX];
int main() {
  while(true){
    cin >> n;
    if(n==0) return 0;
    ans = 0;
    cou = 0;
    rep(i,n){
      cin >> s >> g;
      start[i] = t();
      goal[i] = t();
      start[i].h = (int)(s[0]-'0')*10+(int)(s[1]-'0');
      start[i].m = (int)(s[3]-'0')*10+(int)(s[4]-'0');
      start[i].s = (int)(s[6]-'0')*10+(int)(s[7]-'0');
      goal[i].h = (int)(g[0]-'0')*10+(int)(g[1]-'0');
      goal[i].m = (int)(g[3]-'0')*10+(int)(g[4]-'0');
      goal[i].s = (int)(g[6]-'0')*10+(int)(g[7]-'0');
    }
    rep(i,24) rep(j,60) rep(k,60){
      rep(l,n){
        if(goal[l].h==i&&goal[l].m==j&&goal[l].s==k) cou--;
        if(start[l].h==i&&start[l].m==j&&start[l].s==k) cou++;
      }
      if(cou>ans) ans = cou;
    }
    cout << ans << endl;
  }
  return 0;
}