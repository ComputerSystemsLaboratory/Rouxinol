#include<bits/stdc++.h>
using namespace std;

int n = 0;
int k = 0;
int a[100020] = {0};
int table[100020] = {0};

bool input() {
  cin >> n >> k;
  if (!n && !k) return false;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    table[i+1] = a[i] + table[i];
  }
  return true;
}

int solve() {
  int Max = -1001001001;
  for (int i = 0; i < n-k; i++) {
    Max = max(Max, table[i+k]-table[i]);
  }
  return Max;
}

int main() {
  while(input()) {
    printf("%d\n", solve());
  }
  return 0;
}

