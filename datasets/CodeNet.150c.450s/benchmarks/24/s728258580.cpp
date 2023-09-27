#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
using namespace std;

int main(){
  while(true){
    int n;
    long long m;
    cin >> n >> m;
    if(n == 0 && m == 0) break;
    vector<pair<int,int>> x(n);
    long long ans = 0;
    for(auto &p: x){
      cin >> p.first >> p.second;
      ans += p.first * p.second;
    }

    sort(x.begin(), x.end(), [](const pair<int, int>& a, const pair<int, int>& b) { return a.second > b.second; });

    for(auto p: x){
      int d = min(m, (long long)p.first);
      ans -= d * p.second;
      m -= p.first;
      if(m <= 0) break;
    }
    // for(auto p: x)
      // cout << p.first << " " << p.second << endl;
    cout << ans << endl;
  }
  return 0;
}