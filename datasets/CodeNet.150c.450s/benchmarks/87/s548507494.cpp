#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

int main() {
	int p[10][5], sum = 0, y, x, cnt = 2;
	bool f[10][5] = {};
	for (int h; cin >> h&&h;) {
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < 5; j++) {
				cin >> p[i][j];
			}
		}
		while (1) {
			y = 0;
			for (int i = 0; i < h; i++) {
				x = 0;
				for (int j = 2; j < 5; j++) {
					if (p[i][j] == p[i][j - 1] && p[i][j - 1] == p[i][j - 2] && p[i][j]) {
						x = p[i][j];
						cnt++;
						f[i][j - 2] = 1;
						f[i][j - 1] = 1;
						f[i][j] = 1;
						y = 1;
					}
				}
				sum += x*cnt;
				cnt = 2;
				for (int k = 0; k < 5; k++)if (f[i][k])p[i][k] = 0;
				/*
				putchar('\n');
				for (int i = 0; i < h; i++) {
					for (int j = 0; j < 5; j++) {
						cout << p[i][j] << ' ';
					}
					putchar('\n');

				}
				putchar('\n');


				putchar('\n');
				for (int i = 0; i < h; i++) {
					for (int j = 0; j < 5; j++) {
						cout << f[i][j] << ' ';
					}
					putchar('\n');

				}
				putchar('\n');
				*/

			}
			if (!y)break;
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < 5; j++) {
					if (f[i][j]) {
						f[i][j] = 0;
						for (int k = i; k > 0; k--) {
							swap(p[k][j], p[k - 1][j]);
						}
					}
				}
			}
			/*
			putchar('\n');
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < 5; j++) {
					cout << p[i][j] << ' ';
				}
				putchar('\n');

			}
			putchar('\n');




			putchar('\n');
			for (int i = 0; i < h; i++) {
				for (int j = 0; j < 5; j++) {
					cout << f[i][j] << ' ';
				}
				putchar('\n');

			}
			putchar('\n');
			*/

		}
		cout << sum << endl;;
		sum = 0;

	}
	return 0;
}