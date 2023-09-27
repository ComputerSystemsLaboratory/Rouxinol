#include <iostream>
using namespace std;
int main() {
  int i, n;
  cin >> n;
  int a[n], b[n];
  for(i = 0; i < n; i++) { cin >> a[i]; }
  for(i = n - 1; i >= 0; i--) {
	if (i) { cout << a[i] << " "; }
	else { cout << a[i] << endl; }
  }
  return 0;
}