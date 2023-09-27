#include <bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cin >> n;
  unordered_map<string, int> m;
  for(int i=0; i<n; i++){
    string j;
    cin >> j;
    m[j]++;
  }
  vector<string> v{"AC", "WA", "TLE", "RE"};
  for(auto label: v) {
    cout << label << " x " << m[label] << endl;
  }
}