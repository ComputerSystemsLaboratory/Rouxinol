#include <iostream>

using namespace std;

int main(void){
  while(1){
    int m, nmin, nmax;
    cin >> m;
    cin >> nmin;
    cin >> nmax;
    if(m == 0 && nmin == 0 && nmax == 0){ return 0; }

    int P[m];

    for(int i = 0 ; i < m ; i++){
      cin >> P[i];
    }

    int ans = nmin;
    int max = -1;
    for(int i = nmin ; i <= nmax ; i++){
      if(max >= P[i] - P[i - 1]){
        max = P[i] - P[i - 1];
        ans = i;
      }
    }

    cout << ans << endl;
  }



  return 0;
}