#include<iostream>
using namespace std;

int w, h;
char tile[20][20];
int cnt = 0;
int dx[4] = { 1, -1, 0, 0 };
int dy[4] = { 0, 0, 1, -1 };

void f(int x, int y){
	tile[x][y] = '#';
	cnt++;
	for (int i = 0; i < 4; i++){
		int X = x + dx[i];
		int Y = y + dy[i];
		if (tile[X][Y] != '#' && 0 <= X && X < w && 0 <= Y && Y < h){
			f(X, Y);
		}
	}
}

int main(){

	while (cin >> w >> h, w + h != 0){
		cnt = 0;
		for (int y = 0; y < h; y++){
			for (int x = 0; x < w; x++){
				cin >> tile[x][y];
			}
		}

		for (int y = 0; y < h; y++){
			for (int x = 0; x < w; x++){
				if (tile[x][y] == '@') f(x, y);
			}
		}

		cout << cnt << endl;
	}

	return 0;
}