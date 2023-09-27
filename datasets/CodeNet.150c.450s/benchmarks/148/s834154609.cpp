#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  vector<int> v(4, 0);
  for(int i=0; i<n; i++){
    string s;
    cin >> s;
    
    if(s == "AC")
      v.at(0)++;
    else if(s == "WA")
      v.at(1)++;
    else if(s == "TLE")
      v.at(2)++;
    else
      v.at(3)++;
  }
  
  
  cout << "AC x " << v.at(0) << endl;
  cout << "WA x " << v.at(1) << endl;
  cout << "TLE x " << v.at(2) << endl;
  cout << "RE x " << v.at(3) << endl;
}
