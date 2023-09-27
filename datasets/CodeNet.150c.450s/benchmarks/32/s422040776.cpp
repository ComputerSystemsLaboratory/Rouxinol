#include <bits/stdc++.h>
using namespace std;

int s[205];

int main() {
  while (true) {
    int m, nmin, nmax;
    cin >> m >> nmin >> nmax;

    if ((m | nmin | nmax) == 0)
      break;

    for (int i = 1; i <= m; i++)
      cin >> s[i];

    int mv = nmin;
    for (int i = nmin; i <= nmax; i++)
      if (s[i] - s[i + 1] >= s[mv] - s[mv + 1])
        mv = i;
    cout << mv << endl;
  }
}
