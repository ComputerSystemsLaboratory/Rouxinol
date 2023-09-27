#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  string x;
  vector<int> cnt(4);
  for(int i=0; i<n; i++) {
    cin >> x;
    if(x=="AC") cnt[0]++;
    else if(x=="WA") cnt[1]++;
    else if(x=="TLE") cnt[2]++;
    else if(x=="RE") cnt[3]++;
  }
  
  vector<string> str = {"AC", "WA", "TLE", "RE"};
  for(int i=0; i<4; i++) cout << str[i] << " x " << cnt[i] << endl;
  return 0;
}