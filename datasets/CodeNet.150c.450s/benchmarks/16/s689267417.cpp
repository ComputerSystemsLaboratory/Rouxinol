#include <iostream>
#include <string>
#include <vector>
#include <stack>
#include <cstdio>

using namespace std;

static const char DOWN = '\\';
static const char EVEN = '_';
static const char UP = '/';

struct AREA {
  int index;
  int area;
};

int main() {
  stack<int> input;
  vector<AREA> answer;

  int total = 0;
  string data;
  cin >> data;
  AREA current = {};
  int lastIndex = 0;
  for (int i = 0; i < data.length(); i++) {
    switch (data[i]) {
    case DOWN:
      input.push(i);
      break;
    case EVEN:
      break;
    case UP:
      if (input.empty()) {
        continue;
      }
      lastIndex = input.top();
      input.pop();
      current.area = i - lastIndex;
      current.index = lastIndex;
      total += current.area;
      while (answer.size() > 0 && answer[answer.size() - 1].index > lastIndex) {
        current.area += answer[answer.size() - 1].area;
        answer.pop_back();
      }
      answer.push_back(current);
      break;
    default:
      break;
    }
  }

  cout << total << endl;  
  cout << answer.size();
  for (AREA ans : answer) {
      cout << " " << ans.area;
  }  
  cout << endl;

  return 0;
}

