#include <bits/stdc++.h>
using namespace std;

int main() {
  unordered_map<string,int> hashmap;
  hashmap["AC"] = 0;
  hashmap["WA"] = 0;
  hashmap["TLE"] = 0;
  hashmap["RE"] = 0;
  int N;
  cin >> N;
  for (int i = 0; i < N; ++i) {
    string s;
    cin >> s;
    hashmap[s]++;
  }
  cout << "AC x " << hashmap["AC"] << endl;
  cout << "WA x " << hashmap["WA"] << endl;
  cout << "TLE x " << hashmap["TLE"] << endl;
  cout << "RE x " << hashmap["RE"] << endl;
}