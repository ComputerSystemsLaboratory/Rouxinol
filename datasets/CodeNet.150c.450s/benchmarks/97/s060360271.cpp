// AOJ 1165

#include <iostream>
#include <cstdio>
using namespace std;

int data[500][500];
bool done[500][500];
int fx, fy;
int lx, rx, maxy, miny;

void search(int find, int x, int y, int from)
{
	// cout << "+" << x << " " << y << endl;
	if (data[y][x] == -1 || done[y][x] == true){
		return;
	}
	if (data[y][x] == find){
		fx = x;
		fy = y;
		lx = min(lx, x);
		rx = max(rx, x);
		miny = min(miny, y);
		maxy = max(maxy, y);
		return;
	}
	done[y][x] = true;
	if (from != 2){
		search(find, x + 1, y, 0);
	}
	if (from != 0){
		search(find, x - 1, y, 2);
	}
	if (from != 1){
		search(find, x, y + 1, 3);
	}
	if (from != 3){
		search(find, x, y - 1, 1);
	}
	
	return;
}

int main(void)
{
	int n;
	while (1){
		scanf("%d", &n);
		if (n == 0){
			break;
		}
		
		for (int i = 0; i < 500; i++){
			for (int j = 0; j < 500; j++){
				data[i][j] = -1;
			}
		}
		
		int num, dir;
		int sx = 250, sy = 250;
		data[sy][sx] = 0;
		lx = rx = miny = maxy = 250;
		for (int i = 1; i < n; i++){
			cin >> num >> dir;
			for (int i = 0; i < 500; i++){
				for (int j = 0; j < 500; j++){
					done[i][j] = false;
				}
			}
			search(num, sx, sy, -1);
			if (dir == 0){
				data[fy][fx - 1] = i;
				if (fx - 1 < lx){
					lx = fx - 1;
				}
			}
			else if (dir == 1){
				data[fy + 1][fx] = i;
				if (fy + 1 > maxy){
					maxy = fy + 1;
				}
			}
			else if (dir == 2){
				data[fy][fx + 1] = i;
				if (rx < fx + 1){
					rx = fx + 1;
				}
			}
			else if (dir == 3){
				data[fy - 1][fx] = i;
				if (miny > fy - 1){
					miny = fy - 1;
				}
			}
		}
		
		/*
		for (int j = miny; j <= maxy; j++){
			for (int k = lx; k <= rx; k++){
				printf("%3d", data[j][k]);
			}
			puts("");
		}
		*/
		
		cout << rx - lx + 1 << " " << maxy - miny + 1 << endl;
	}
	
	return 0;
}