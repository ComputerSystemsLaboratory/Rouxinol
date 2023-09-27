#include <iostream>
#include <climits>
using namespace std;

int n, k;
int* w;

bool search(int x) {
  int cost = 0;
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (w[i] > x)
      return false;
    cost += w[i];
    if (cost > x) {
      cost = w[i];
      cnt++;
      if (cnt == k)
        return false;
    }
  }
  return true;
}

int main() {
  cin >> n >> k;
  w = new int[n];
  for (int i = 0; i < n; i++) {
    cin >> w[i];
  }
  
  int l = 0;
  int r = INT_MAX;

  while (l < r) {
    int m = (l + r) / 2;
    if (search(m)) 
      r = m;
    else
      l = m + 1;
  }

  cout << l << endl;

  return 0;
}