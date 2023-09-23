#include<iostream>
#include<string>
#include<cmath>
#include<queue>
#include<vector>
#include<functional>
#include<algorithm>
using namespace std;
int main() {
	long long u[10],v=1,uv[10];
	for (int i = 0; i < 10 ; i++) {
		u[i] = v;
		if (i == 0) uv[i] = u[i];
		else uv[i] = u[i - 1] + u[i];
		v *= 2;
	}
	int h, w;
	while (cin >> h >> w&&h != 0 && w != 0) {
		bool a[10][10000];
		int b[10000];
		fill(b, b + w, 0);
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> v;
				if (v == 0) {
					a[i][j] = true;
					b[j]++;
				}
				else a[i][j] = false;
			}
		}
		long long c = 0;
		int sum2 = 0;
		for (c = 0; c <=uv[h-1] ; c++) {
			int c2 = c;
			int b2[10000];
			for (int i = 0; i < w; i++) {
				b2[i] = b[i];
			}
			for (int i = h-1; i >= 0; i--) {
				if (c2 >= u[i]) {
					c2 -= u[i];
					for (int j = 0; j < w; j++) {
						if (a[(h-1)-i][j]) {
							b2[j]--;
						}
						else b2[j]++;
					}
				}
			}
			int sum = 0;
			for (int i = 0; i < w; i++) {
				sum += max(b2[i], h - b2[i]);
			}
			sum2 = max(sum2, sum);
		}
		cout << sum2 << endl;
	}
}