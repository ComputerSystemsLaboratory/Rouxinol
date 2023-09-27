#include <iostream>
#include <numeric>
#include <algorithm>
#include <vector>
#include <string>
#include <stack>
using namespace std;

int main() {
  string A;
  cin >> A;

  stack<int> s;
  stack<pair<int, int>> pairs;

  for(int i = 0; i < A.size(); i++) {
    if(A[i] == '\\') {
      s.push(i);
    } else if(A[i] == '/' && !s.empty()) {
      pairs.push(make_pair(s.top(), i));
      s.pop();
    }
  }

  if(pairs.size() == 0) {
    cout << 0 << endl << 0 << endl;
    return 0;
  }

  int sub = 0, leftest = pairs.top().first;
  vector<int> subs;

  for(auto t = pairs.top(); !pairs.empty(); pairs.pop()) {
    t = pairs.top();

    auto left = t.first, right = t.second;

    if(leftest <= left) {
      sub += right - left;
    } else {
      subs.push_back(sub);
      sub = right - left;
      leftest = left;
    }
  }
  if(sub) {
    subs.push_back(sub);
  }

  cout << accumulate(subs.begin(), subs.end(), 0) << endl;

  cout << subs.size() << " ";

  reverse(subs.begin(), subs.end());

  for(int i = 0; i < subs.size(); i++) {
    cout << subs[i] << (i + 1 == subs.size() ? '\n' : ' ');
  }
}