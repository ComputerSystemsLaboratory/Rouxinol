#include <iostream>
#include <cstdio>

using namespace std;

int main(void) {
	int w, n, a[31], b[31], ans[31];
	
	cin >> w >> n;
	for (int i = 1; i <= n; i++) {
		scanf("%d,%d", &a[i], &b[i]);
	}
	for (int i = 1; i <= w; i++) {
		int point = i;
		for (int j = 1; j <= n; j++) {
			if (point == a[j]) {
				point = b[j];
			}
			else if (point == b[j]) {
				point = a[j];
			}
		}
		ans[point] = i;
	}
	for (int i = 1; i <= w; i++) {
		cout << ans[i] << endl;
	}
}