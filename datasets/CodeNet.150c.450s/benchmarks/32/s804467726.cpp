#include <iostream>
using namespace std;

int main(void){
  int m, nmin, nmax;
  int gap, ans, lower, p, i;
  while(1){
    cin >> m >> nmin >> nmax;
    if(m == 0) break;

    for(i=0;i<nmin - 1;i++) cin >> p;
    cin >> lower;
  
    ans = nmin;
    gap = 0;
    for(i=0;i<nmax - nmin + 1;i++){
      cin >> p;
      if(gap <= lower - p){
        gap = lower - p;
        ans = nmin + i;
      }
      lower = p;
    }
  
    for(i=0;i<m - nmax - 1;i++) cin >> p;

    cout << ans << endl;
  }
  return 0;
}
