#include <algorithm>
#include <cmath>
#include <iostream>
#include <sstream>
#include <vector>
#include <string>

using namespace std;

int solve(vector<int> list) {
  int diff_max;
  int tmp_max = 0;
  int tmp_max_num;
  for (int i = 0; i < list.size() - 1; ++i) {
    if (i == 0) {
      for (int j = 1; j < list.size(); ++j) {
        if (list[j] > tmp_max) {
          tmp_max = list[j];
          tmp_max_num = j;
        }
      }
      diff_max = tmp_max - list[i];
    } else if (i < tmp_max_num) {
      int diff = tmp_max - list[i];
      if (diff > diff_max) {
        diff_max = diff;
      }
    } else {
      tmp_max = 0;
      for (int j = i + 1; j < list.size(); ++j) {
        if (list[j] > tmp_max) {
          tmp_max = list[j];
          tmp_max_num = j;
        }
      }
      int diff = tmp_max - list[i];
      if (diff > diff_max) {
        diff_max = diff;
      }
    }
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