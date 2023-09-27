#include <iostream>
#include <set>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
  int m;
  cin >> m;
  for(int i = 0; i < m; i++){
    string s, x, y, rx, ry;
    set <string> t;
    cin >> s;
    for(int j = 1; j < s.size(); j++){
      x = rx = s.substr(0, j);
      y = ry = s.substr(j);
      reverse(rx.begin(), rx.end());
      reverse(ry.begin(), ry.end());
      t.insert(x + y);
      t.insert(rx + y);
      t.insert(x + ry);
      t.insert(rx + ry);
      t.insert(y + x);
      t.insert(ry + x);
      t.insert(y + rx);
      t.insert(ry + rx);
    }
    cout << t.size() << endl;
  }
}