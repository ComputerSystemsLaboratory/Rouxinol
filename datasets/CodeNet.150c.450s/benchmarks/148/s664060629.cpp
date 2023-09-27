#include <bits/stdc++.h>
using namespace std;

int main() {
  
  int n;
  cin  >> n;
  
  int ac = 0;
  int wa = 0;
  int tl = 0;
  int re = 0;
  
  for (int i = 0; i < n; i++){
    string s;
    cin >> s;
    if(s == "AC"){
      ac = ac + 1;		
    }
    else if(s == "WA"){
      wa = wa + 1;
    }
    else if (s == "TLE"){
      tl = tl + 1;		
    }
    else if (s == "RE"){
      re = re + 1;
    }
    
  }
  
  cout << "AC" << " " << "x" << " " << ac << endl;
  cout << "WA" << " " << "x" << " "  << wa << endl;
  cout << "TLE" << " " << "x" << " "  << tl << endl;
  cout << "RE" << " " << "x"  << " " << re << endl;

}



