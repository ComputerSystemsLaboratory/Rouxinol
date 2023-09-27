#include <iostream>
#include <algorithm>
#define MAX_N 20
using namespace std;

int a[MAX_N];

bool rec(int key, int sum, int current, int n) {
  if (sum == key) return true;
  if (current == n) return false;
  if (sum > key) return false;
  
  return (rec(key, sum, current + 1, n)
	  || rec(key, sum + a[current], current + 1, n));
}

int main() {
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int q;
  cin >> q;
  int m[q];
  for (int i = 0; i < q; i++) {
    cin >> m[i];
  }

  for (int i = 0; i < q; i++) {
    if (rec(m[i], 0, 0, n)) cout << "yes" << endl;
    else cout << "no" << endl;
  }

  return 0;
}