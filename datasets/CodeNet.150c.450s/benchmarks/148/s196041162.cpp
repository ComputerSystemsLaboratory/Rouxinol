#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> vec(4,0);
  vector<string> result = {"AC", "WA", "TLE","RE"};
  for(int i = 0; i < N; i++) {
    string s;
    cin >> s;
    for(int j = 0; j < 4; j++) {
      if(s==result.at(j))
        vec.at(j)++;
    }
  }
  for(int i = 0; i < 4; i++) {
    cout << result.at(i) << " x " << vec.at(i) << endl;
  }
}