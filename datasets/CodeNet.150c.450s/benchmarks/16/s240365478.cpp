#include <bits/stdc++.h>
using namespace std;

int main() {

  string s;
  cin >> s;

  vector<int> answer;

  deque<int> S1;
  deque<pair<int, int>> S2;
  int sum = 0;
  
  for (int i = 0; i < s.size(); i++) {  
    if (s[i] == '\\') {
      S1.push_back(i);
    } else if (s[i] == '/' && 0 < S1.size()) {
      int j = S1.back();
      S1.pop_back();
      sum += i - j;
      int a = i - j;
      while (0 < S2.size() && j < S2.back().first) {
        a += S2.back().second;
        S2.pop_back();
      }
      S2.push_back(make_pair(j, a));
    }
  }

  while (0 < S2.size()) {
    answer.push_back(S2.back().second);
    S2.pop_back();
  }

  reverse(answer.begin(), answer.end());
  
  cout << sum << endl;
  cout << answer.size();
  
  for (int i = 0; i < answer.size(); i++) {
    cout << " ";
    cout << answer[i];
  }
  cout << endl;

  return 0;
}
