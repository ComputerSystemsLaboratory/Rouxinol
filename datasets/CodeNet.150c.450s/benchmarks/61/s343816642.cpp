#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
#include<algorithm>
#include<cstdio>
using namespace std;
int main() {
	int n, a, b, c, x;
	while (cin >> n >> a >> b >> c >> x&&n + a + b + c + x != 0) {
		int d[100];
		for (int i = 0; i < n; i++) cin >> d[i];
		int sum = 0;
		for (int i = 0; i < n; i++) {
			while (x != d[i]) {
				x = (a*x + b) % c;
				sum++;
				if (sum > 10000) {
					cout << -1 << endl;
					goto stop;
				}
			}
			if (i != n - 1) {
				x = (a*x + b) % c;
				sum++;
			}
		}
		cout << sum << endl;
	stop:;
	}
}