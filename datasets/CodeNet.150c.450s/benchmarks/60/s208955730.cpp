#include <iostream>
using namespace std;
int main() {
  int a[100][100] = {};
  int n, k, idx, v;
  cin >> n;
  for(int i = 0; i < n; ++i) {
	cin >> idx >> k;
	for(int j = 0; j < k; ++j) {
	  cin >> v;
	  a[i][v - 1] = 1;
	}
  }

  for(int i = 0; i < n; ++i) {
	for(int j = 0; j < n; ++j) {
	  cout << a[i][j];
	  cout << (j < n - 1 ? " " : "\n");
	}
  }
  return 0;
}