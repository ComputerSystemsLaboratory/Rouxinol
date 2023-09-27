#include<iostream>
#include<iomanip>
#include<string>
#include<cstdlib>
#include<cmath>
#include<algorithm>

using namespace std;

int H, W;
int table[20][20];
int cnt;

void calc(int current_y, int current_x) {
	table[current_y][current_x] = 3;

	if(current_y > 0 && table[current_y-1][current_x] == 1)
		calc(current_y-1, current_x);
	if(current_x > 0 && table[current_y][current_x-1] == 1)
		calc(current_y, current_x-1);
	if(current_y < H-1 && table[current_y+1][current_x] == 1)
		calc(current_y+1, current_x);
	if(current_x < W-1 && table[current_y][current_x+1] == 1)
		calc(current_y, current_x+1);

	cnt++;
}


int main() {
	while(1) {
		cnt = 0;
		cin >> W >> H;
		if(W == 0 && H == 0) break;

		char temp;
		int current[2];
		for(int i=0; i<H; i++) {
			for(int j=0; j<W; j++) {
				cin >> temp;
				if(temp=='.') table[i][j] = 1;
				else if(temp=='#') table[i][j] = 2;
				else if(temp=='@') {
					table[i][j] = 0;
					current[0] = i;
					current[1] = j;
				}
			}
		}

		calc(current[0], current[1]);

		cout << cnt << endl;
	}

	return 0;
}