#include <algorithm>
#include <iostream>
#include <set>
#include <string>

using namespace std;

int32_t main() {
  uint32_t n;
  cin >> n;

  for (uint32_t _ = 0; _ < n; _++) {
    string str;
    cin >> str;

    set<string> trains;
    for (uint32_t i = 1; i < str.size(); i++) {
      string first = str.substr(0, i);
      string second = str.substr(i, str.size() - i);
      string rfirst = string(first);
      reverse(rfirst.begin(), rfirst.end());
      string rsecond = string(second);
      reverse(second.begin(), second.end());
      trains.insert(first + second);
      trains.insert(rfirst + second);
      trains.insert(first + rsecond);
      trains.insert(rfirst + rsecond);
      trains.insert(second + first);
      trains.insert(second + rfirst);
      trains.insert(rsecond + first);
      trains.insert(rsecond + rfirst);
    }
    cout << trains.size() << endl;
  }
  return 0;
}