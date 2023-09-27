#include <iostream>
using namespace std;
#define REP(i,n) for(int i=0;i<int(n);i++)

int main()
{
  while(1){
    int m, n_min, n_max;
    cin >> m >> n_min >> n_max;
    if(m == 0 && n_min == 0 && n_max == 0) break;
    int P[m];
    REP(i,m) cin >> P[i];
    int ans;
    int gap = 0;
    for(int i = n_min; i <= n_max; i++)
      if(P[i-1]-P[i] >= gap){
        gap = P[i-1]-P[i];
        ans = i;
      }
    cout << ans << endl;
  }
}