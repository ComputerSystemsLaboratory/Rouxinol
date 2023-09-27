#include <iostream>
#include <vector>
using namespace std;

int main(void){
  while(true){
    int m, nmin, nmax = 0;
    cin >> m >> nmin >> nmax;
    if(m == 0 && nmin == 0 && nmax == 0){ break; }

    vector<int> p(m);
    for(int i = 0; i < m; i++){ cin >> p[i]; }

    int maxgap = 0, ans = 0;
    for(int i = nmin; i <= nmax; i++){
      int gap = p[i - 1] - p[i];
      if(maxgap <= gap){
        maxgap = gap;
        ans = i;
      }
    }
    
    cout << ans << endl;
  }




  return 0;
}