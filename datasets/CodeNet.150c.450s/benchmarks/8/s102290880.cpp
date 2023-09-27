/*
 * http://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP1_9_C
 */
#include <iostream>
#include <string>

using namespace std;

int
main()
{
  ios::sync_with_stdio(false);

  int n;
  cin >> n; cin.ignore();

  int st = 0;
  int sh = 0;
  for (int i = 0; i < n; i++) {
    string t, h;
    cin >> t >> h; cin.ignore();

    int r = t.compare(h);
    if (r < 0) {
      sh += 3;
    } else if (r > 0) {
      st += 3;
    } else {
      st++;
      sh++;
    }
  }
  cout << st << ' ' << sh << endl;

  return 0;
}