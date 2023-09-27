#include <iostream>
#include <stack>
#include <vector>
#include <utility>
using namespace std;

int main() {
  stack<int> S1;
  stack<pair<int, int>> S2;
  int x {0}, tmp_area {0}, total_area {0};

  char c;
  while (cin >> c) {
    tmp_area = 0;
    if (c == '\\') {
      S1.push(x);
    } else if (c == '/' && !S1.empty()) {
      int matching_x = S1.top(); S1.pop();
      tmp_area += x - matching_x;
      total_area += x - matching_x;

      while (!S2.empty()) {
        auto prev_pond = S2.top();
        if (prev_pond.first > matching_x) {
          S2.pop();
          tmp_area += prev_pond.second;
        } else {
          break;
        }
      }
      S2.push(make_pair(x, tmp_area));
    }
    x++;
    if (c == 'q') break;
  }

  vector<int> A;

  cout << total_area << endl;
  cout << S2.size();

  while (!S2.empty()) {
    A.push_back(S2.top().second);
    S2.pop();
  }

  for (int i = A.size() - 1; i >= 0; i--) {
    cout << " " << A.at(i);
  }
  cout << endl;
}

