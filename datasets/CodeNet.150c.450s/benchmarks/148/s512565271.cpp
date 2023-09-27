#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  int ac=0;
  int wa=0;
  int tle=0;
  int re=0;
  string s;
  cin >> N;
  for(int i=0; i<N; i++){
    cin >> s;
    if(s=="AC")
      ac++;
    if(s=="WA")
      wa++;
    if(s=="TLE")
      tle++;
    if(s=="RE")
      re++;
  }
    cout << "AC x " << ac << endl;
    cout << "WA x " << wa << endl;
    cout << "TLE x " << tle << endl;
    cout << "RE x " << re << endl;
}