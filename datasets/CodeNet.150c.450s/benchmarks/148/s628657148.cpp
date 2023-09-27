/**
 * author:  virenkathiriya96
 * created: 2020.08.31 14:42:39 
**/

#include<bits/stdc++.h>

using namespace std;

#define i64 long long
#define i32 int

signed main() {
  ios_base::sync_with_stdio(false);
  cin.tie(0), cout.tie(0);
  int t;
  cin >> t;
  map<string , int> mp;
  while(t--) {
    string s;
    cin >> s;
    mp[s]++;
  }
  cout << "AC x " << mp["AC"] << "\n";
  cout << "WA x " << mp["WA"] << "\n";
  cout << "TLE x " << mp["TLE"] << "\n";
  cout << "RE x " << mp["RE"] << "\n";
  return 0;
}