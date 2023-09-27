#include <bits/stdc++.h>
using namespace std;
const int MAX = 2000000000;

int n, k;
vector<int> w;

bool isOK(int P) {
  int cnt = 1, space = P;
  for (int i = 0; i < n; i++) {
    if (space - w[i] < 0) {
      space = P;
      cnt ++;
      if (cnt > k) {
        return false;
      }
      i--;
    }
    else {
      space -= w[i];
    }
  }
  return true;
}

int binarySearch() {
  int left = 0, right = MAX;
  while (right - left >1) {
    int mid = (left + right) / 2;
    if (isOK(mid)) {
      right = mid;
    }
    else {
      left = mid;
    }
  }
  return right;
}

int main() {
  cin >> n >> k;
  w.resize(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  cout << binarySearch() << endl;
}
