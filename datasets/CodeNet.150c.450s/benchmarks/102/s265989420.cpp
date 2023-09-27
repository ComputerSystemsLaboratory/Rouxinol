#define _USE_MATH_DEFINES
#include<iostream>
#include<cstdio>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<list>
#include<stack>
#include<queue>
#include<cctype>
#include<iomanip>
#include<functional>
#include<numeric>
#include<map>
#include<set>
#include<complex>
#define EPS 1e-10
using namespace std;
typedef long long llong;
vector<vector<char> >v;
int cnt;
int w, h;

void dfs(int x, int y) {
	if (x == h || x == -1)return;
	if (y == -1 || y == w)return;
	if (v[x][y] == '#')return;

	if (v[x][y] == '.'||v[x][y]=='@') {
		cnt++;
		v[x][y] = '#';
		dfs(x + 1, y);
		dfs(x - 1, y);
		dfs(x, y + 1);
		dfs(x, y - 1);

	}

	return;

}

int main() {
	while (cin >> w >> h&&w&&h) {
		v = vector<vector<char> >(h, vector<char>(w));
		int x, y;
		cnt = 0;
		for (int i = 0; i < h; i++) {
			for (int j = 0; j < w; j++) {
				cin >> v[i][j];
				if (v[i][j] == '@') {
					x = i;
					y = j;
				}
			}
		}
		dfs(x, y);

		cout << cnt << endl;


	}
	return 0;
}