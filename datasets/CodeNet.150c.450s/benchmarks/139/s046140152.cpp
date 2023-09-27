#include <bits/stdc++.h>

#include <iostream>
using namespace std;
int main() {
  int64_t n, m;
  cin >> n >> m;
  vector<vector<int64_t>> road(n);
  vector<int64_t> len(n - 1, 0);
  vector<int64_t> ans(n - 1, 0);
  vector<int64_t> temp_vec;
  for (size_t i = 0; i < m; i++) {
    int64_t temp1, temp2;
    cin >> temp1 >> temp2;
    road[temp1 - 1].push_back(temp2);
    road[temp2 - 1].push_back(temp1);
    if (temp1 == 1) {
      ans[temp2 - 2] = temp1;
      temp_vec.push_back(temp2);
    } else if (temp2 == 1) {
      ans[temp1 - 2] = temp2;
      temp_vec.push_back(temp1);
    }
  }

  while (
      !std::all_of(ans.begin(), ans.end(), [](int64_t x) { return x != 0; })) {
    vector<int64_t> temp_vec2;
    for (auto temp_i : temp_vec) {
      for (auto road_i : road[temp_i - 1]) {
        if (road_i > 1) {
          if (ans[road_i - 2] == 0) {
            ans[road_i - 2] = temp_i;
            temp_vec2.push_back(road_i);
          }
        }
      }
    }
    temp_vec = temp_vec2;
  }

  cout << "Yes" << endl;
  for (auto ans_i : ans) {
    cout << ans_i << endl;
  }
  return 0;
}
