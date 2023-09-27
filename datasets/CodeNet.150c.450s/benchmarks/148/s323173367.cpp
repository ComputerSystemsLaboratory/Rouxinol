#include <algorithm>
#include <iostream>
#include <string>
#include <stack>
#include <utility>
#include <vector>
#include <math.h>

#define rep(i, n) for (auto i = 0; i < (n); i++)
#define MOD 1e9 + 7
typedef long long ll;

using namespace std;

int main() {
  int n;
  cin >> n;
  int ac = 0, wa = 0, tle = 0, re = 0;
  rep(i, n) {
    string r;
    cin >> r;
    if (r == "AC")
      ac++;
    else if (r == "WA")
      wa++;
    else if (r == "TLE")
      tle++;
    else if (r == "RE")
      re++;
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;

  return 0;
}

