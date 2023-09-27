#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

#define LOOP(i, a, n) for (int i = (int)a; i < (int)n; ++i)
#define REP(i, n) LOOP(i, 0, n)
#define MOD 1000000007
#define INF 1000000000
#define PI 3.14159265359

int main(void) {
  int cnt = 0;
  vector<int> ans;
  while (true) {
    int n;
    cin >> n;
    if (n == 0)
      break;
    vector<int> v;
    int temp;
    for (int i = 0; i < n; i++) {
      cin >> temp;
      v.push_back(temp);
    }
    sort(v.begin(), v.end());
    for(int i=1; i<n-1; i++) {
      cnt += v[i];
    }
    ans.push_back(cnt/(n-2));
    cnt = 0;
  }

  for(int i=0; i<ans.size(); i++) {
    cout << ans[i] << endl;
  }

  return 0;
}