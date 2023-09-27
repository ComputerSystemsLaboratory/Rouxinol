#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>
#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
using namespace std;
int dx[4] = { -1, 0, 1, 0 }, dy[4] = { 0, -1, 0, 1 };
struct axis { int x, y; };
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int N;  while (cin >> N && N != 0)
	{
		vector<axis> dat(N + 2);
		axis ans_max; ans_max.x = 0, ans_max.y = 0;
		axis ans_min; ans_min.x = 0, ans_min.y = 0;
		for(int i = 1; i < N; i++)
		{
			int pic = 0, dir = 0; cin >> pic >> dir;
			dat[i].x = dat[pic].x + dx[dir];
			dat[i].y = dat[pic].y + dy[dir];
			ans_max.x = max(ans_max.x, dat[i].x);
			ans_max.y = max(ans_max.y, dat[i].y);
			ans_min.x = min(ans_min.x, dat[i].x);
			ans_min.y = min(ans_min.y, dat[i].y);
		}
		printf("%d ", abs(ans_max.x) + abs(ans_min.x) + 1);
		printf("%d\n", abs(ans_max.y) + abs(ans_min.y) + 1);
	}
	return 0;
}