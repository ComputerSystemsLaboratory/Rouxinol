#include <iostream>
#include <vector>
#include <set>
#include <map>
#include <queue>
#include <deque>
#include <algorithm>
#include <numeric>
using namespace std;
using ll = long long;

int main() {
  string s;
  cin >> s;
  vector<int> height(s.size() + 1);
  map<int, queue<int>> sameHeight;
  int h = 0; 
  height[0] = h;
  sameHeight[h].push(0);
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '\\') {
      --h;
    } else if (s[i] == '/') {
      ++h;
    }
    height[i + 1] = h;
    sameHeight[h].push(i + 1);
  }
  vector<int> res;
  for (int i = 0; i + 1 < height.size(); i++) {
    sameHeight[height[i]].pop();
    if (height[i] > height[i+1] && sameHeight[height[i]].size() > 0) {
      int H = height[i];
      int j = sameHeight[H].front();
      int w = 0;
      for (int k = i + 1; k <= j; k++) {
        w += (H - height[k - 1]) + (H - height[k]);
        if (k != j) {
          sameHeight[height[k]].pop();
        }
      }
      w /= 2;
      res.push_back(w);
      i = j - 1;
    }
  }
  cout << accumulate(res.begin(), res.end(), 0) << endl;
  cout << res.size();
  for (int w: res) {
    cout << " " << w;
  }
  cout << endl;
  return 0;
}

