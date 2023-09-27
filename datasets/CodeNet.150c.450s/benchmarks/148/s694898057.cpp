#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int n,countAC = 0,countWA = 0, countTLE = 0, countRE = 0;
  string s;
  cin >> n;
  for(int i=0; i<n; i++){
    cin >> s;
    if(s == "AC"){
      countAC++;
    }else if(s == "WA"){
      countWA++;
    }else if(s == "TLE"){
      countTLE++;
    }else if(s == "RE"){
      countRE++;
    }
  }
  cout << "AC x " << countAC << endl;
  cout << "WA x " << countWA  << endl;
  cout << "TLE x " << countTLE << endl;
  cout << "RE x " <<  countRE << endl;
}