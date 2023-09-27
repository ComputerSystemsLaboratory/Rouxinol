#include<bits/stdc++.h>
using namespace std;

int main(){
  int m, n, diff, n_min, n_max, point[200];
  while(cin >> m >> n_min >> n_max, m){
    n = 0; diff = 0;
    for(int i = 0; i < m; ++i) cin >> point[i];
    for(int i = n_min; i <= n_max; i++){
      if(diff <= point[i - 1] - point[i]){
        diff = point[i - 1] - point[i];
        n = i;
      }
    }
    cout << n << endl;
  }
  return 0;
}
