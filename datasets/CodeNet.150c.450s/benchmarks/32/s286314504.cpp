#include<bits/stdc++.h>
using namespace std;
int main(void){

  int m , n_min , n_max;
  int P[200];
  while(true){
    int ans, max_gap = 0;
    cin >> m >> n_min >> n_max;
    if(m == 0 && n_min == 0 && n_max == 0)   break;

    for(int i = 0 ; i < m ; i++)   cin >> P[i];

    for(int i = n_min - 1 ; i < n_max ; i++){
      if(max_gap <= P[i] - P[i + 1]){
        max_gap = P[i] - P[i + 1];
        ans = i + 1;
      }
    }
      cout << ans << endl;
  }

  return 0;
}
