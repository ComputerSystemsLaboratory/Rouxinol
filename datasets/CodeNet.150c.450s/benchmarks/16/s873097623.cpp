#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <deque>
using namespace std;

int main() {
  string area;
  cin >> area;

  stack<int> slope;
  deque<int> L;
  int A = 0;
  vector<int> down;
  int j = 0;
  for (int i = 0; i < area.size(); i++) {
    if (area[i] == '\\') {
      slope.push(i);
      down.push_back(i);
      j++;
    } else if (area[i] == '/') {
      if (slope.empty()) {
        down.clear();
        j = 0;
        continue;
      }

      L.push_back(i - slope.top());
      A += i - slope.top();

      while (j > 0) {
        j--;

        if (slope.top() < down[j]) {
          down.erase(down.begin() + j);
          int plus = L.back();
          L.pop_back();
          plus += L.back();
          L.pop_back();
          L.push_back(plus);
        } else if (j == 0) { break; }
      }

      j = down.size();

      slope.pop();
    }
  }

  cout << A << endl;
  if (!L.empty()) {
    cout << L.size() << " ";
  } else {
    cout << L.size() << endl;
  }
  while (!L.empty()) {
    if (L.size() == 1) {
      cout << L.front() << endl;
    } else {
      cout << L.front() << " ";
    }
    L.pop_front();
  }

  return 0;
}
