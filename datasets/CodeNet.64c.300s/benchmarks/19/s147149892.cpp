
#include<iostream>

using namespace std;

int main() {
  int a[5000], n, i, j, result, tmp;
  while(cin >> n && n) {
    for(i = 0; i < n; i++) cin >> a[i];
    for(i = 1; i < n; i++) a[i] += a[i-1];
    result = a[n-1];
    for(i = n-1; i >= 0; i--)
      {
	if (a[i] > result) result = a[i];
	for(j = 0; j < i; j++)
	  if ((tmp = a[i] - a[j]) > result) result = tmp;
      }
    cout << result << endl;
  }
  return 0;
}