#include <bits/stdc++.h>

#define REP(i,n) for(int i=0;i<(int)n;++i)

using namespace std;

int main() {
  while(1){
    int m,nmin,nmax;
    cin>>m>>nmin>>nmax;
    if(!m)break;
    int gap = 0;
    int n = 0;
    vector<int> p(m);
    REP(i,m) cin>>p[i];
    for (int i = nmin; i <= nmax; ++i) {
      if (p[i-1]-p[i] >= gap) {
        gap = p[i-1] - p[i];
        n = i;
      }
    }
    cout << n << endl;
  }
  return 0;
}