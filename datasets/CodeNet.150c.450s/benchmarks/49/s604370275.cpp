#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef pair<int, int> i_i;
typedef pair<i_i, int> p_i;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
template<class T> using vv=vector<vector<T>>;

int main() {
  vector<int> stack;

  while (true) {
    int count;
    cin >> count;
    if (count == 0) { break; }
    vi point(count);
    for (int i = 0 ; i < count ; i++) {
      cin >> point[i];
    }
    sort(point.begin(), point.end());
    int ave = 0;
    for (int i = 1 ; i <= point.size()-2 ; i++) {
      ave += point[i];
    }
    ave /= (count-2);
    stack.push_back(ave);
  }

  for (int i = 0 ; i < stack.size() ; i++) {
    printf("%d\n", stack[i]);
  }

  return 0;
}