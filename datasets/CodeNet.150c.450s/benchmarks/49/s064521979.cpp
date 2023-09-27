#define _USE_MATH_DEFINES
#include <cmath>
#include <string>
#include <vector>
#include <utility>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <numeric>
#include <array>
#include <float.h>
#include <memory>
#include <functional>
#include <iomanip>
#include <queue>
#include <random>
#include <map>
#include <set>

#pragma warning(disable:4996)

using namespace std;

int main() {
  while (true) {
    int size;
    cin >> size;
    if (size == 0) {
      break;
    }
    vector<int> v(size);
    for (auto&& vv : v) {
      cin >> vv;
    }
    sort(v.begin(), v.end());
    cout << accumulate(v.begin() + 1, v.end() - 1, 0) / (v.size() - 2) << endl;
  }
  return 0;
}