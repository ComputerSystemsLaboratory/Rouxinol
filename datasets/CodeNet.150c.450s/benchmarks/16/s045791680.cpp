#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> P;

int main() {
  string s;
  stack<int> left_bank;
  stack<P> pond;
  int area = 0;
  cin >> s;
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '\\') {
      left_bank.push(i);
    } else if (s[i] == '/' && !left_bank.empty()) {
      int j = left_bank.top();
      left_bank.pop();
      int sub_area = i - j;
      area += sub_area;
      while (!pond.empty() && j < pond.top().first) {
        sub_area += pond.top().second;
        pond.pop();
      }
      pond.emplace(j, sub_area);
    }
  }
  vector<int> v;
  while (!pond.empty()) {
    v.push_back(pond.top().second);
    pond.pop();
  }
  cout << area << "\n" << v.size();
  for (int i = v.size() - 1; i >= 0; i--) {
    cout << " " << v[i];
  }
  cout << "\n";
}
