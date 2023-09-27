#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <algorithm>
#include <vector>
#include <complex>
using namespace std;

#define REP(i, a, b) for (int i = (a); i < (b); i++)
#define rep(i, n) REP(i, 0, n)

#define MAX 21
int brd[MAX][MAX];

int N;

int dx[] = { 0, 0, 1, -1 }; // N S E W
int dy[] = { 1, -1, 0, 0 };
int direc[128];

int main()
{
	direc['N'] = 0;
	direc['S'] = 1;
	direc['E'] = 2;
	direc['W'] = 3;
	while (cin >> N, N) {
		memset(brd, 0, sizeof(brd));
		rep(i, N) {
			int x, y;
			cin >> x >> y;
			brd[y][x] = 1;
		}

		int step;
		cin >> step;
		int x = 10, y = 10;	
		rep(t, step) {
			char d;	int s;
			cin >> d >> s;
			while (s--) {
				x += dx[direc[d]];
				y += dy[direc[d]];
				brd[y][x] = 0;
			}
		}

		int cnt = 0;
		rep(j, MAX) rep(i, MAX)	if (brd[j][i]) cnt++;
		cout << (cnt?"No":"Yes") << endl;
	}
	return 0;
}