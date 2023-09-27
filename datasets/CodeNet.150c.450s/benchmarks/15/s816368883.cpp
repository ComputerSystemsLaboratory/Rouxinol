#include <iostream>
using namespace std;

const int MAX = 1e9 + 5;
bool t[MAX];

signed main()
{
  int n, q;
  int ans = 0;

  cin >> n;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    t[tmp] = 1;
  }

  cin >> q;
  for (int i = 0; i < q; i++) {
    int tmp;
    cin >> tmp;
    if (t[tmp] == 1) {
      ans++;
      t[tmp] = 0;
    }
  }

  cout << ans << endl;

  return (0);
}