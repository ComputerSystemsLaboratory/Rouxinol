#include <iostream>
#include <utility>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;

#define rep(i, n) for(int i = 0; i < (int)(n); ++i)

int main()
{
  int a, L;
  while(cin >> a >> L, (a|L)) {
    map<int, int> m;
    int idx = 0;
    for(;;) {
    string str = to_string(a);
    if( m.find(a) != m.end() ) {
      int v = m[a];
      cout << v << " " << a << " " << (idx - v) << endl;
      break;
    }
    m[a] = idx++;

    while(str.size() < (unsigned long)L) {
      str.append("0");
    }

    string left( str ); sort(left.begin(), left.end(), greater<char>());
    string right( str ); sort(right.begin(), right.end());

    a = stoi(left) - stoi(right);
    }
  }

  return 0;
}