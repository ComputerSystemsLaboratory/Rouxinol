#include <iostream>
#include <map>

using namespace std;

const string KEYS[] = {"AC", "WA", "TLE", "RE"};

int main() {
  int n;
  cin >> n;

  map<string, int> m;

  for (int i = 0; i < n; ++i) {
    string s;
    cin >> s;
    m[s]++;
  }

  for (const string &key : KEYS) {
    printf("%s x %d\n", key.c_str(), m[key]);
  }
}
