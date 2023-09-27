#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {

	int a[151][151] = {};

	for (int i = 1; i <= 150; i++) {
		for (int j = i + 1; j <= 150; j++) {
			a[i][j] = i*i + j*j;
		}
	}

	for (int h, w; cin >> h >> w && h && w;) {
		int m = 150 * 150 + 150 * 150;
		int n = h*h + w*w;
		int H, W;
		for (int i = 150; i >= 1; i--) {
			for (int j = i + 1; j <= 150; j++) {
				if (m >= a[i][j] && a[i][j] >= n && !(i == h&&j == w)) {
					if (a[i][j] == n&&i < h)continue;
					m = a[i][j];
					H = i; W = j;
					//cout << M << endl;
				}
			}
		}
		cout << H << " " << W << endl;
	}
	return 0;
}