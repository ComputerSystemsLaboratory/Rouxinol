#include <iostream>
#include <algorithm>
#define MAX_N 100000
#define INF 1000000000
using namespace std;

int a[MAX_N];
int dp[MAX_N];

int search(int key, int n) {
  int left = 0;
  int right = n;
  while (left < right) {
    int mid = (left + right) / 2;
    if (dp[mid] < key) {
      left = mid + 1;
    } else {
      right = mid;
    }
  }
  return left;
}

void solve(int n) {
  dp[0] = a[0];
  int length = 1;
  for (int i = 1; i < n; i++) {
    if (dp[length - 1] < a[i]) {
      dp[length++] = a[i];
    } else {
      int index = search(a[i], length);
      dp[index] = a[i];
    }
  }
  cout << length << endl;
}

void init() {
  for (int i = 0; i < MAX_N; i++) {
    dp[i] = INF;
  }
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  init();
  solve(n);
}