#include <algorithm>
#include <iostream>
using namespace std;
static const int MAX = 100000;
int w[MAX];
int n, k;

bool isOK(int p) {
  int ntrk = 1;
  int curweight = 0;
  for (int i = 0; i < n; i++) {
    if (p < w[i])
      return false;
    if (curweight + w[i] <= p) {
      curweight += w[i];
    } else {
      curweight = w[i];
      ntrk++;
      if (ntrk > k)
        return false;
    }
  }
  return true;
}

int main() {
  cin >> n;
  cin >> k;
  int sum = 0, wmax = 0;
  for (int i = 0; i < n; i++) {
    cin >> w[i];
    if (w[i] > wmax)
      wmax = w[i];
    sum += w[i];
  }

  int left = wmax;
  int rigiht = sum;
  int mid;

  while (left < rigiht) {
    mid = (left + rigiht) / 2;
    if (isOK(mid)) {
      rigiht = mid;
    } else {
      left = mid + 1;
    }
  }

  cout << rigiht << endl;
}