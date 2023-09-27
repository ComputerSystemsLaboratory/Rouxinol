#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
typedef pair<int, int> P;
typedef unsigned int ui;
int main() {
	int n,m,x,y,l;
	char d;
	int i, j;
	while (cin >> n) {
		if (n == 0)break;
		int a[21][21];
		for (i = 0; i < 21; i++) {
			for (j = 0; j <21; j++) {
				a[i][j] = 0;
			}
		}
		for (i = 0; i < n; i++) {
			cin >> x >> y; a[x][y] = 1;
		}
		cin >> m;
		int nowx = 10; int nowy = 10;
		for (i = 0; i < m; i++) {
			cin >> d >> l;
			if (d == 'S') {
				for (j = 1; j <= l; j++) {
					a[nowx][nowy - j] = 0;
				}
				nowy -= l;
			}
			else if (d == 'N') {
				for (j = 1; j <= l; j++) {
					a[nowx][nowy + j] = 0;
				}
				nowy += l;
			}
			else if (d == 'E') {
				for (j = 1; j <= l; j++) {
					a[nowx+j][nowy] = 0;
				}
				nowx += l;
			}
			else if (d == 'W') {
				for (j = 1; j <= l; j++) {
					a[nowx-j][nowy] = 0;
				}
				nowx -= l;
			}
		}
		bool f = true;
		for (i = 0; i < 21; i++) {
			for (j = 0; j < 21; j++) {
				if (a[i][j] == 1)f = false;
			}
		}
		if (f)cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}
