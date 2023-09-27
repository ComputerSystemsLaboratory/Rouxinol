#include <bits/stdc++.h>

using namespace std;

#define REP(i,a,b) for(int i=a;i<(int)b;i++)
#define rep(i,n) REP(i,0,n)

int main() {
  
  int H;
  while(cin >> H && H) {
    int b[10][10];
    rep(i, H) rep(j, 5) {
      cin >> b[i][j];
    }

    int score = 0;
    while(1) {
      bool update = 0;
      rep(i, H) rep(j, 5)
        for(int k=5; k>0; k--) {
          if(k-j < 3) continue;
          bool ok = 1;
          REP(l, j+1, k) {
            if(b[i][l] == -1) ok = 0;
            if(b[i][l] != b[i][j]) ok = 0;
          }
          if(!ok) continue;
          update = 1;
          REP(l, j, k) {
            score += b[i][l]; b[i][l] = -1;
          }
        }
    
      if(!update) break;
    
      rep(j, 5) {
        queue<int> q;
        for(int i=H-1; i>=0; i--) { if(b[i][j]!=-1) q.push(b[i][j]); }
        for(int i=H-1; i>=0; i--) {
          if(q.empty()) { b[i][j] = -1; }
          else { b[i][j] = q.front(); q.pop(); }
        }
      }
    }
    cout << score << endl;
  }
  return 0;
}