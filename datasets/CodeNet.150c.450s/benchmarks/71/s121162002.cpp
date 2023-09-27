#include<cstdio>
#include<iostream>
using namespace std;

void solve(int n) {
	int a, b, c, d, ans = 0;
	for (a = 0; a <= 9; a++) {
		for (b = 0; b <= 9; b++) {
			for (c = 0; c <= 9; c++) {
				for (d = 0; d <= 9; d++) {
					if (a + b + c + d == n) ans++;
				}
			}
		}
	}
	printf("%d\n", ans);
}

int main() {
	int n;
	while (cin >> n) {
		solve(n);
	}
	return 0;
}