#include <algorithm>
#include <cassert>
#include <cmath>
#include <cstdio>
#include <deque>
#include <iomanip>
#include <iostream>
#include <map>
#include <queue>
#include <set>
#include <stack>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <vector>
using std::cerr;
using std::cin;
using std::cout;
using std::endl;

const int MAX_RESULT = 1000000;
std::unordered_set<int> primeset;
int Solve(int a, int d, int n) {
  int primecount = 0;
  while (primecount < n) {
    // cerr << "\033[93m" << primecount << " " << a << "\033[m" << endl;
    if (primeset.find(a) != primeset.end()) {
      // cerr << "\033[93m" << a << "is prime"
      //      << "\033[m" << endl;
      primecount++;
    }
    a += d;
  }
  return a - d;
}

int main(void) {
  cout << std::fixed << std::setprecision(10);
  cin.tie(0);
  std::ios::sync_with_stdio(false);

  bool searchset[MAX_RESULT + 1] = {};
  for (int i = 2; i <= MAX_RESULT; i++) {
    searchset[i] = true;
  }

  for (int top = 2; top <= 1000; top++) {
    if (!searchset[top]) continue;
    primeset.insert(top);
    for (int i = top; i <= MAX_RESULT; i += top) {
      searchset[i] = false;
    }
  }

  for (int i = 2; i <= MAX_RESULT; i++) {
    if (searchset[i]) {
      primeset.insert(i);
    }
  }

  while (1) {
    int a, d, n;
    cin >> a >> d >> n;
    if (a == 0 && d == 0 && n == 0) break;
    cout << Solve(a, d, n) << endl;
  }

  return 0;
}

