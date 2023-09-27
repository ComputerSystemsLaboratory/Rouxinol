#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;cin >> n;

  vector<int> c(4);
  string tmp;
  for(int i=0;i<n;i++){
    cin >> tmp;
    if(tmp=="AC")c[0]+=1;
    if(tmp=="WA")c[1]+=1;
    if(tmp=="TLE")c[2]+=1;
    if(tmp=="RE")c[3]+=1;
  }
  
  cout << "AC x " << c[0] << endl;
  cout << "WA x " << c[1] << endl;
  cout << "TLE x " << c[2] << endl;
  cout << "RE x " << c[3] << endl;
  return 0;
}
