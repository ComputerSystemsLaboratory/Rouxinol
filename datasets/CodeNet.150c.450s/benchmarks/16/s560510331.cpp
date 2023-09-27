#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  string str;
  stack<int> s1;
  stack<pair<int, int> > s2;
  stack<int> s3;
  int sum = 0;

  cin >> str;
  for (int i = 0; i < str.size(); i++) {
    if (str[i] == '\\') {
      s1.push(i);
    } else if (str[i] == '/' && !s1.empty()) {
      int j = s1.top();
      s1.pop();
      int area = i - j;
      sum += area;
      while (s2.size() > 0 && s2.top().first > j) {
        area += s2.top().second;
        s2.pop();
      }
      s2.push(make_pair(j, area));
    }
  }

  cout << sum << endl;
  cout << s2.size();
  while (s2.size() > 0) {
    s3.push(s2.top().second);
    s2.pop();
  }
  while (s3.size() > 0) {
    cout << " " << s3.top();
    s3.pop();
  }
  cout << endl;

  return 0;
}