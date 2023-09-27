#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;
 
int main() {
  int n;
  cin >> n;
  string input;
  unordered_map<string, int> res;
  res["AC"] = res["WA"] = res["TLE"] = res["RE"] = 0;
  for (int i = 0; i < n; ++i) {
    cin >> input;
    res[input]++;
  }
  cout << "AC x " << res["AC"] << '\n';
  cout << "WA x " << res["WA"] << '\n';
  cout << "TLE x " << res["TLE"] << '\n';
  cout << "RE x " << res["RE"] << '\n';
  return 0;
}