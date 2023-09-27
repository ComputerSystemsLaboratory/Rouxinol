#include <iostream>
using namespace std;


int h, w;
char table[100][100];


void solve(int x, int y, char f){
	table[y][x] = '_';

	int dx[] = { 1, 0, -1, 0 };
	int dy[] = { 0, 1, 0, -1 };

	for (int i = 0; i < 4; i++){
		int X = x + dx[i];
		int Y = y + dy[i];

		if (0 <= X && X < w && 0 <= Y && Y < h && table[Y][X] == f)
			solve(X, Y, table[Y][X]);

	}
}


int main(){
	while (cin >> h >> w, (h | w) != 0){
		int cnt = 0;
		for (int y = 0; y < h; y++){
			for (int x = 0; x < w; x++){
				cin >> table[y][x];
			}
		}

		for (int y = 0; y < h; y++){
			for (int x = 0; x < w; x++){
				if (table[y][x] != '_'){
					cnt++;
					solve(x, y, table[y][x]);
				}
			}
		}

		cout << cnt << endl;
	}

	return 0;
}