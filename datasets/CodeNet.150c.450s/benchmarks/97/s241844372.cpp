#include <iostream>
#include <algorithm>

#define mk(x, y) make_pair(x, y)
#define X first
#define Y second

using namespace std;

typedef pair<int, int> pii;

int main( void )
{
	int dx[] = { -1, 0, 1, 0 };
	int dy[] = { 0, 1, 0, -1 };

	pii T[200];
	int n;
	while(cin >> n, n) {
		int minx, miny, maxx, maxy;
		minx = miny = maxx = maxy = 0;
		T[0] = mk(0, 0);
		for(int i=1; i < n; ++i) {
			int no, d;
			cin >> no >> d;
			T[i] = mk(T[no].X + dx[d], T[no].Y + dy[d]);
			minx = min(minx, T[i].X);
			miny = min(miny, T[i].Y);
			maxx = max(maxx, T[i].X);
			maxy = max(maxy, T[i].Y);
		}
		cout << maxx - minx + 1 << ' ' << maxy - miny + 1 << endl;
	}
	return 0;
}