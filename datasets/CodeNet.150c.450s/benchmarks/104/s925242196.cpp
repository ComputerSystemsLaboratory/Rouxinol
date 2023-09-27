//AOJ Drowng Lots

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
	int w, n;
	int a[30], b[30];
	int x[30];
	cin >> w;
	cin >> n;
	for(int i = 0; i < w; i++) {
		x[i] = i+1;
	}
	for(int i = 0; i < n; i++) {
		scanf("%d,%d", &a[i], &b[i]);
		a[i]--;
		b[i]--;
		swap(x[a[i]], x[b[i]]);
	}
	for(int i = 0; i < w; i++) {
		cout << x[i] << endl;
	}
	return 0;
}