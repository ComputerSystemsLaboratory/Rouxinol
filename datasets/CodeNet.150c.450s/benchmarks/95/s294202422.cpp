#include <bits/stdc++.h>
using namespace std;
int main(){
  while (1){
    int n;
    cin >> n;
    if (n == 0){
      break;
    }
    vector<string> f(n);
    for (int i = 0; i < n; i++){
      cin >> f[i];
    }
    int ans = 0;
    for (int i = 0; i < n - 1; i++){
      if (f[i][0] != f[i + 1][0] && f[i][1] == f[i + 1][1]){
        ans++;
      }
    }
    cout << ans << endl;
  }
}
