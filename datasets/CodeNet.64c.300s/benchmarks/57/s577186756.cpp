#include <iostream>
#include <algorithm>

#define rep2(i, b, n) for(int i=b; i < n; ++i)
#define rep(i, n) rep2(i, 0, n)

using namespace std;

bool fd[10][10000];

int h, w;

int search( int r )
{
	int res = 0;
	if(r >= h) {
		rep(x, w) {
			int t_sum = 0;
			rep(y, h) {
				if(!fd[y][x]) ++t_sum;
			}
			res += max(t_sum, h-t_sum);
		}
		return res;
	}
	rep(i, w) {
		fd[r][i] = !fd[r][i];
	}
	res = max(res, search(r + 1));
	rep(i, w) {
		fd[r][i] = !fd[r][i];
	}
	res = max(res, search(r + 1));
	return res;
}

int main( void )
{
	while(cin >> h >> w, h | w) {
		rep(y, h) rep(x, w) {
			cin >> fd[y][x];
		}
		cout << search(0) << endl;
	}
	return 0;
}