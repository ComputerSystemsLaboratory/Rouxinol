#include <iostream>
#include <string>
using namespace std;

int n, k;
int w[100000];

int getMin(int max) {
  int kk = k;
  int sum = 0;
  for (int i = 0; i < n; i++) {
    if (sum + w[i] > max) {
      kk--;
      if (kk == 0) return false;
      sum = w[i];
    } else {
      sum += w[i];
    }
  }
  return true;
}
int main() {
  cin.tie(0);
  ios::sync_with_stdio(false);

  int max = 0;
  int sum = 0;

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> w[i];
    if (w[i] > max) max = w[i];
    sum += w[i];
  }

  int left = max;
  int right = sum;
  int mid;
  bool prev_result;
  while (true) {
    mid = (left + right) / 2;
    if (getMin(mid)) {
      if (right - left <= 1) {
        if (prev_result) {
          cout << right << endl;
        } else {
          cout << left << endl;
        }
        break;
      }
      right = mid;
    } else {
      if (right - left <= 1) {
        if (prev_result) {
          cout << left << endl;
        } else {
          cout << right << endl;
        }
        break;
      }
      left = mid + 1;
    }
  }

  return 0;
}