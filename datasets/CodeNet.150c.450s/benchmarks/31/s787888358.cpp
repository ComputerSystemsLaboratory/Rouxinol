#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int solve(vector<int> list) {
  int diff_max = list[1] - list[0];
  int tmp_min = list[0];
  for (int j = 1; j < list.size(); ++j) {
    diff_max = max(diff_max, list[j] - tmp_min);
    tmp_min = min(tmp_min, list[j]);
  }
  return diff_max;
}

int main() {
  int N;
  cin >> N;
  vector<int> v;
  for (int i = 0; i < N; ++i) {
    string n;
    cin >> n;
    v.push_back(stoi(n));
  }
  cout << solve(v) << endl;
}