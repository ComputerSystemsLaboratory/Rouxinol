#include <bits/stdc++.h>
using namespace std;
 
int main() {
  
  int N;
  scanf("%d", &N);
  
  vector<string> vs(N);
  for(int i=0;i<N;i++){
      cin >> vs[i];
  }

  map<string, int> mp;
  mp["AC"] = 0;
  mp["WA"] = 0;
  mp["TLE"] = 0;
  mp["RE"] = 0;
  
  for(int i=0;i<N;i++){
      mp[vs[i]]++;
  }

  cout << "AC x " << mp["AC"] << "\n";
  cout << "WA x " << mp["WA"] << "\n";
  cout << "TLE x " << mp["TLE"] << "\n";
  cout << "RE x " << mp["RE"] << "\n";

  return 0;
}