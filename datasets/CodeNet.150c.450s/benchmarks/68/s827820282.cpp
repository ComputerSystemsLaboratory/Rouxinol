#include<bits/stdc++.h>

using namespace std;

static const int INF = 1e9 + 7;

void hawawa()
{
  int n;
  while (cin >> n && n) {
    vector<int> a(n);
    for (auto&& i : a) {
      cin >> i;
    }
    sort(begin(a), end(a));
    int ans = INF;
    for (int i = 1; i < n; i++) {
      ans = min(ans, a[i] - a[i - 1]);
    }
    cout << ans << "\n";
  }
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  hawawa();
}