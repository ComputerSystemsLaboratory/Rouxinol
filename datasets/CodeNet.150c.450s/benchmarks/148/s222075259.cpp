#include <bits/stdc++.h>
#define rep(i,n) for (int i=0;i<n;i++)
using namespace std;

int main() {
  int N,ac=0,wa=0,tle=0,re=0;
  cin >> N;
  rep(i,N) {
    string s;
    cin >> s;
    if (s=="AC") ac++;
    if (s=="WA") wa++;
    if (s=="TLE") tle++;
    if (s=="RE") re++;
  }
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
}
