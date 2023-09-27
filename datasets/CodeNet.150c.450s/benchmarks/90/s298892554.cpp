#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  map<int, int> mp;
  while (cin >> n){
    mp[n]++;
  }
  int maxnum = 1;
  for (auto m:mp) {
    maxnum = max(m.second, maxnum);
  }
  for (auto m:mp) {
    if (maxnum == m.second)
    cout << m.first << endl;
  }
}
