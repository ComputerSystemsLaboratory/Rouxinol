#include <iostream>
using namespace std;

int main()
{
  while(1){
    int m, nmin, nmax;
    cin >> m >> nmin >> nmax;
    if(m == 0 && nmin == 0 && nmax == 0) break;
    int P[m];
    for(int i = 0; i < m; i++)
      cin >> P[i];
    int x = -1;
    int ans;
    for(int i = nmin; i <= nmax; i++){
      if(x <= P[i-1]-P[i]){
        x = P[i-1]-P[i];
        ans = i;
      }
    }
    cout << ans << endl;
  }
}