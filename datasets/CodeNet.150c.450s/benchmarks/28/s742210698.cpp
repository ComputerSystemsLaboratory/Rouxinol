#include<iostream>
#include<cstdio>
#include<algorithm>
#include<queue>
#include<vector>
#include<string>
#include<functional>
using namespace std;

int d[100000];
signed main() {
	int a, b; scanf("%d%d", &a, &b);
	int s = 0;
	for (int c = 0; c < a; c++) {
		scanf("%d", &d[c]);
		s = max(s, d[c]);
	}
	int g = 1 << 29;//(s,g]
	while (g-s>1) {
		int k = (s + g) / 2;
		int sum = 1;
		int n = 0;
		for (int i = 0; i < a; i++) {
			if (n + d[i] <= k) {
				n += d[i];
			}
			else {
				n = d[i];
				sum++;
			}
		}
		if (sum > b) {
			s = k;
		}
		else {
			sum = 1;
			int m = k - 1;
			int n = 0;
			for (int i = 0; i < a; i++) {
				if (n + d[i] <= m) {
					n += d[i];
				}
				else {
					n = d[i];
					sum++;
				}
			}
			if (sum > b) {
				printf("%d\n", k);
				return 0;
			}
			else {
				g = k;
			}
		}
	}
	cout << s << endl;
}