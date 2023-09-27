#define _GLIBCXX_DEBUG //エラーを出すためのおまじない
#include <bits/stdc++.h>
#include <algorithm>
//#include <cstdlib>  // abs() for integer
#include <cmath>    // abs() for float, and fabs()
#include <math.h>
using namespace std;
#define coYES cout << "YES" << endl
#define coNO cout << "NO" << endl
#define coYes cout << "Yes" << endl
#define coNo cout << "No" << endl
#define coyes cout << "yes" << endl
#define cono cout << "no" << endl
//#define cocount cout << count << endl;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)
#define rep1(i, n) for (int i = 1; i < (int)(n); i++)
#define Cinint(n) int n;\
cin >> n;
#define Cinvecint(a, n) vector<int> a(n);\
for (int i = 0; i < (int)(n); i++) {\
  int num;\
  cin >> num;\
  a.at(i) = num;\
}
#define Cinstring(s) string s;\
cin >>s;

  

int main() {
  int n;
  cin >> n;
  vector<string> s(n);
  rep(i, n) {
    string ss;
    cin >> ss;
    s.at(i) = ss;
  }
  int countAC, countWA, countTLE, countRE;
  countAC = 0;
  countWA = 0;
  countTLE = 0;
  countRE = 0;
  rep(i, n) {
    if (s.at(i) == "AC") {
      countAC++;
    }
    else if (s.at(i) == "WA") {
      countWA++;
    }
    else if (s.at(i) == "TLE") {
      countTLE++;
    }
    else {
      countRE++;
    }
  }
  cout << "AC" << " " << "x" << " " << countAC << endl;
  cout << "WA" << " " << "x" << " " << countWA << endl;
  cout << "TLE" << " " << "x" << " " << countTLE << endl;  
  cout << "RE" << " " << "x" << " " << countRE << endl;
}
