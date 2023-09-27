#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)(n);i++)

using namespace std;

int main() {
  while(1){
    int x,y,s;
    cin>>x>>y>>s;
    if(!x)break;
    int mx = 0;
    REP(i,s) {
      if (!i) continue;
      REP(j,s) {
        if(!j) continue;
        int p1 = (i*(100+x))/100;
        int p2 = (j*(100+x))/100;
        if (p1 + p2 != s) continue;
        int q1 = (i*(100+y))/100;
        int q2 = (j*(100+y))/100;
        mx = max(mx, q1+q2);
      }
    }
    cout << mx << endl;
  }
  return 0;
}