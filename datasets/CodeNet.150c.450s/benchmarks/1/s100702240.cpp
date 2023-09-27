#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>
#include <math.h>
using namespace std;
int main() {
	int n, a[100001], l[100001];
	cin >> n;
	for (int i = 0; i < n; i++) 
		cin >> a[i + 1];
	l[1] = a[1];
	int le = 1;
	for (int i = 1; i <= n; i++) {
		if (a[i] > l[le]) {
			l[++le] = a[i];
		 }
		else *lower_bound(l + 1, l + le + 1, a[i]) = a[i];
	}
	cout << le << endl;
	return 0;
}