#include <bits/stdc++.h>
using namespace std;

int main() {
  int d;
  cin >> d;
  vector<long long> c(26);
  for(int i = 0; i < 26; i++) cin >> c.at(i);
  vector<vector<long long>> s(d, vector<long long> (26));
  for(int i = 0; i < d; i++){
    for(int j = 0; j < 26; j++) cin >> s.at(i).at(j);
  }
  
  vector<int> ans(d), last(26);
  long long score = 0;
  for(int i = 0; i < d; i++){
    int a;
    cin >> a;
    a--;
    last.at(a) = i+1;
    score += s.at(i).at(a);
    for(int j = 0; j < 26; j++){
      score -= c.at(j) * (i + 1 - last.at(j));
    }
    cout << score << endl;
  }
}