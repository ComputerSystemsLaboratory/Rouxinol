#include <iostream>

using namespace std;

int main( void )
{
	char map[21][21];
	int n, m;
	while(cin >> n, n) {
		for(int y=0; y < 21; ++y)
			for(int x=0; x < 21; ++x) {
				map[y][x] = 0;
			}
		for(int i=0; i < n; ++i) {
			int x, y;
			cin >> x >> y;
			map[y][x] = 1;
		}
		cin >> m;
		int dx[] = { 0, 0, -1, 1 };
		int dy[] = { -1, 1, 0, 0 };
		int mx, my, count;
		mx = my = 10;
		count = 0;
		for(int i=0; i < m; ++i) {
			char d;
			int l;
			cin >> d >> l;
			switch(d) {
			case 'N':
				d = 1;
				break;
			case 'S':
				d = 0;
				break;
			case 'E':
				d = 3;
				break;
			case 'W':
				d = 2;
				break;
			}
			for(int j=0; j < l; ++j) {
				mx += dx[d];
				my += dy[d];
				if(map[my][mx]) {
					map[my][mx] = 0;
					++count;
				}
			}
		}
		if(count == n)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}