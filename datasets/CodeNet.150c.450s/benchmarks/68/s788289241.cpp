#include <bits/stdc++.h>
using namespace std;

int main(void){
  while(1){
    int n; cin >> n;
    if(n == 0) break;
    vector<int> a(n);
    for(auto& _a: a){
      cin >> _a;
    }
    sort(a.begin(), a.end());
    int ans = 1000000*2;
    for(int i = 1; i < a.size(); i++){
      ans = min(ans, a[i] - a[i-1]);
    }
    cout << ans << endl;
  }
  return 0;
}

