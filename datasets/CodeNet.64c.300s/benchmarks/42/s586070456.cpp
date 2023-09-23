#include <iostream>
#include <algorithm>
using namespace std;

int dy[] = {0, 1, 0, -1}, dx[] = {1, 0, -1, 0};

int main(void)
{
	int n;
	while (cin >> n, n){
		int field[21][21];
		int x, y, jewel = 0, dir = 0;
		for (int i = 0; i < 21; i++) fill(field[i], field[i] + 21, 0);
		for (int i = 0; i < n; i++){
			cin >> x >> y;
			field[y][x] = 1;
			if (x == 10 && y == 10) {
				jewel--;
				field[y][x] = 0;
			}
			jewel++;
		}
		int m, move, nx = 10, ny = 10;
		char c;
		cin >> m;
		for (int i = 0; i < m; i++){
			cin >> c >> move;
			if (c == 'N') dir = 1;
			if (c == 'E') dir = 0;
			if (c == 'S') dir = 3;
			if (c == 'W') dir = 2;
			for (int j = 0; j < move; j++){
				nx += dx[dir];
				ny += dy[dir];
				if (field[ny][nx] == 1){
					field[ny][nx] = 0;
					jewel--;
				}
			}
		}
		
		if (jewel) cout << "No" << endl;
		else cout << "Yes" << endl;
	}
	
	return 0;
}