#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  while(cin >> n, n != 0){
    vector<int> v(n);
    for(int i = 0; i < n; i++)cin >> v[i];

    int ans = 1e9;
    for(int i = 0; i < n; i++){
      for(int j = i + 1; j < n; j++){
        ans = min(ans, abs(v[i] - v[j]));
      }
    }
    cout << ans << endl;
  }
}