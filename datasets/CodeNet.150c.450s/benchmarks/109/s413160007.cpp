#include <bits/stdc++.h>
using namespace std;
int time(string s){
  return (s[0] - '0') * 36000 + (s[1] - '0') * 3600 + (s[3] - '0') * 600 + (s[4] - '0') * 60 + (s[6] - '0') * 10 + (s[7] - '0');
}
int main(){
  while (1){
    int n;
    cin >> n;
    if (n == 0){
      break;
    }
    vector<string> s(n), t(n);
    for (int i = 0; i < n; i++){
      cin >> s[i] >> t[i];
    }
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++){
      a[i] = time(s[i]);
      b[i] = time(t[i]);
    }
    vector<int> d(86400, 0);
    for (int i = 0; i < n; i++){
      d[a[i]]++;
      d[b[i]]--;
    }
    for (int i = 1; i < 86400; i++){
      d[i] += d[i - 1];
    }
    int ans = 0;
    for (int i = 0; i < 86400; i++){
      ans = max(ans, d[i]);
    }
    cout << ans << endl;
  }
}
