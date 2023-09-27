#include <bits/stdc++.h>
using namespace std;  

int main() {
  int n;
  cin >> n;
  
  vector<string> C(n);
  for(int i = 0; i < n; i++){
    cin >> C.at(i);
  }
  
  int ac = 0;
  int wa = 0;
  int tle = 0;
  int re = 0;
  
  for(string x : C){
    if(x == "AC") ac++;
    if(x == "WA") wa++;
    if(x == "TLE") tle++;
    if(x == "RE") re++;
  }
  
  cout << "AC x " << ac << endl;
  cout << "WA x " << wa << endl;
  cout << "TLE x " << tle << endl;
  cout << "RE x " << re << endl;
  return 0;
}