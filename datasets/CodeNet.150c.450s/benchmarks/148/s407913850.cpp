#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n)                    \
  for (int i = 0; i < (int)(n); i++) \
    ;

#define _GLIBCXX_DEBUG
#define _LIBCPP_DEBUG 0

int main() {
  long n;
  cin >> n;

  long ac = 0;
  long wa = 0;
  long tle = 0;
  long re = 0;

  for (long i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    if (tmp == "AC") {
      ac++;
    }
    if (tmp == "WA") {
      wa++;
    }
    if (tmp == "TLE") {
      tle++;
    }
    if (tmp == "RE") {
      re++;
    }
  }

  cout << "AC"
       << " x " << ac << endl;
  cout << "WA"
       << " x " << wa << endl;
  cout << "TLE"
       << " x " << tle << endl;
  cout << "RE"
       << " x " << re << endl;
}
