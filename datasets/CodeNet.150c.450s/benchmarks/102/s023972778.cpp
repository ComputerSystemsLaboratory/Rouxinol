#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>
#include <cstring>

#define rep(i, j) for(int i = 0; i < j; i++)
// sp_rep
#define sp_rep(i, j) for(int i = 1; i <= j; i++)
#define all(i) i.begin(), i.end()
#define ll long long

using namespace std;

string Num2Str(int num)
{
	stringstream ss;
	ss << num;
	return ss.str();
}

int w, h, cnt;
char maze[20][20];
bool reached[20][20];

void serch(int x, int y) {
	if (x < 0 || w <= x || y < 0 || h <= y || maze[y][x] == '#') return;
	if (reached[y][x])return;
	reached[y][x] = true;
	cnt++;

	serch(x + 1, y);
	serch(x - 1, y);
	serch(x, y + 1);
	serch(x, y - 1);
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	// code
	while (true) {
		cin >> w >> h;
		if (w == 0 && h == 0)break;
		cnt = 0;
		memset(reached, false, sizeof(reached));
		int sx, sy;
		rep(y, h) {
			rep(x, w) {
				cin >> maze[y][x];
				if (maze[y][x] == '@') {
					sx = x;
					sy = y;
				}
			}
		}
		serch(sx, sy);
		cout << cnt << endl;
	}

	return 0;
}