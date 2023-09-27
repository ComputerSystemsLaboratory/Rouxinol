#include <iostream>
#include <string>
#include <deque>
#include <vector>

using namespace std;


int main() {
  string inputs;
  cin >> inputs;

  deque<int> q;
  typedef pair<int, int> pair_t;
  vector<pair_t> v;
  int local = 0;
  for (int i = 0; i < inputs.size(); ++i) {
    if (inputs.at(i) == '\\') {
      q.push_back(i);
    } else if (inputs.at(i) == '/' && !q.empty()) {
      int left = q.back();
      q.pop_back();
      int local = i - left;
      while (!v.empty() && left < v.back().first) {
        local += v.back().second;
        v.pop_back();
      }
      v.push_back(pair_t(left, local));
    }
  }

  int sum = 0;
  for (auto elem : v) {
    sum += elem.second;
  }
  cout << sum << endl;
  cout << v.size();
  for (auto elem : v) {
    cout << " " << elem.second;
  }
  cout << endl;
}