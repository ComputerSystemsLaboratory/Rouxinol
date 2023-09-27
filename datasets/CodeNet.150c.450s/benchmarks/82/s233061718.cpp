#include <iostream>
#include <queue>

using namespace std;

namespace {

struct State {
  int top;
  int bottom;
  int front;
  int back;
  int left;
  int right;

  void Init() {
    top = 1;
    bottom = 6;
    front = 2;
    back = 5;
    left = 4;
    right = 3;
  }
};

State Next(const State& s, char c) {
  State o;
  int temp = 0;
  switch (c) {
    case 'S':
      temp = s.front;
      o.front = s.top;
      o.top = s.back;
      o.back = s.bottom;
      o.bottom = temp;
      o.left = s.left;
      o.right = s.right;
      break;
    case 'N':
      temp = s.back;
      o.back = s.top;
      o.top = s.front;
      o.front = s.bottom;
      o.bottom = temp;
      o.left = s.left;
      o.right = s.right;
      break;
    case 'E':
      temp = s.right;
      o.right = s.top;
      o.top = s.left;
      o.left = s.bottom;
      o.bottom = temp;
      o.front = s.front;
      o.back = s.back;
      break;
    case 'W':
      temp = s.left;
      o.left = s.top;
      o.top = s.right;
      o.right = s.bottom;
      o.bottom = temp;
      o.front = s.front;
      o.back = s.back;
      break;
  }
  return o;
}

int BFS(const int* values, int top, int front) {
  State start;
  start.Init();
  queue<State> q;
  q.push(start);
  const char dirs[4] = {'S', 'N', 'E', 'W'};

  while (!q.empty()) {
    const State p = q.front();
    q.pop();

    if (values[p.top - 1] == top && values[p.front - 1] == front) {
      return values[p.right - 1];
    }
    for (size_t i = 0; i < 4; ++i) {
      State o = Next(p, dirs[i]);
      q.push(o);
    }
  }
  // not found
  return -1;
}

} // namespace

int main() {
  int values[6];
  for (int i = 0; i < 6; ++i) {
    cin >> values[i];
  }
  int q;
  cin >> q;
  int top, front;
  for (int i = 0; i < q; ++i) {
    cin >> top >> front;
    cout << BFS(values, top, front) << endl;
  }
  return 0;
}