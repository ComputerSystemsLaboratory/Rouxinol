#include <iostream>
#include <map>
using namespace std;

int main(int argc, char const* argv[])
{
  int i, n, m;
  char dest, target;

  while (true) {
    cin >> n;
    map<char, char> table;

    if (n == 0) { break; }

    for (i = 0; i < n; i++) {
      cin >> dest;
      cin >> target;
      table[dest] = target;
    }

    cin >> m;

    for (i = 0; i < m; i++) {
      cin >> target;

      if (table.find(target) != table.end()) {
        cout << table[target];
      } else {
        cout << target;
      }
    }
    cout << endl;
  }

  return 0;
}