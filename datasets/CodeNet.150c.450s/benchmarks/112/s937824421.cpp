#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

int main () {
  int n;
  cin >> n;
  while (n > 0) {
    unordered_map<string, string> map;
    for (int i = 0; i < n; i++) {
      string a, b;
      cin >> a >> b;
      map.emplace(a, b);
    }
    
    cin >> n;
    for (int i = 0; i < n; i++) {
      string a;
      cin >> a;
      if (map.find(a) != map.end()) {
        cout << map.at(a);
      } else {
        cout << a;
      }
    }
    cout << endl;
    cin >> n;
  }
  return 0;
}