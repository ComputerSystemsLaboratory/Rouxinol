#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;

int n;
vector<int> a(21);

bool can(int i, int m) {
  if (m == 0)
    return true;
  else if (m < 0 || n < i)
    return false;  // はみ出た or 最後を越した
  else
    return (can(i + 1, m) || can(i + 1, m - a[i]));
}

int main() {
  cin >> n;
  for (int i = 0; i < n; i++) cin >> a[i];

  int q, m;
  cin >> q;
  for (int i = 0; i < q; i++) {
    cin >> m;
    if (can(0, m))
      cout << "yes" << endl;
    else
      cout << "no" << endl;
  }
}

