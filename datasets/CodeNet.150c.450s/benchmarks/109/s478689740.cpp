#include<iostream>
#include<cstdio>
using namespace std;
int a[24 * 60 * 60+10];
int main() {
	long long a1, m1, a2, m2, a3, m3;
	int n;
	while (cin >> n&&n != 0) {
		int h1, m1, s1, h2, m2, s2;
		fill(a, a + 60 * 24 * 60+10, 0);
		int sum = 0;
		for (int i = 0; i<n; i++) {
			scanf("%d:%d:%d %d:%d:%d", &h1, &m1, &s1, &h2, &m2, &s2);
			bool k = false;
			for (int i = h1 * 3600 + m1 * 60 + s1; i<h2 * 3600 + m2 * 60 + s2; i++) {
				a[i]--;
				if (a[i] < 0) {
					sum++;
					for (int i = 0; i < 24 * 60 * 60+10; i++) a[i]++;
				}
			}
		}
		cout << sum << endl;
	}
}