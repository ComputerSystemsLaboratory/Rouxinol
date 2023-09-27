#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
int main() {
  int N, M;
  while(cin >> N >> M && (N|M)) {
    vector<int> y(N+1), x(M+1);
    for(int i=0; i<N; i++) { cin >> y[i+1]; y[i+1] += y[i]; }
    for(int i=0; i<M; i++) { cin >> x[i+1]; x[i+1] += x[i]; }
    N++, M++;
    unordered_map<int, int> mp;
    for(int i=0; i<N; i++)
      for(int j=0; j<M; j++)
        mp[y[i]-x[j]]++;
    // 斜め45度線
    int ans = 0;
    for(auto e : mp)
      if(e.second >= 2)
        ans += e.second*(e.second-1)/2;
    cout << ans << endl;
  }
  return 0;
}