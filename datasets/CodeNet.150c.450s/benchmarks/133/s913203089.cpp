#include <bits/stdc++.h>
using namespace std;

int main() {
  int d;
  cin >> d;

  vector<int> c(27);
  long long csum = 0;
  for (int i = 1; i <= 26; i++) {
    cin >> c.at(i);
    csum += c.at(i);
  }

  vector<vector<int>> s(d+1, vector<int>(27));
  for (int i = 1; i <= d; i++) {
    for (int j = 1; j <= 26; j++) {
      cin >> s.at(i).at(j);
    }
  }

  vector<int> last(27, 0);
  long long curc = 0;
  long long satisfy = 0;
  for (int i = 1; i <= d; i++) {
    int t;
    cin >> t;
    curc += csum - (c.at(t) * (i - last.at(t)));
    last.at(t) = i;
    satisfy += s.at(i).at(t) - curc;
    cout << satisfy << endl;
  }

  return 0;
}
