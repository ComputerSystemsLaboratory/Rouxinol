#include <iostream>
using namespace std;

char Data[100][100];
int H,W;
void dl (int x,int y,char target) {
	//cout << x << "/" << y << "/" << target << endl;
	Data[y][x] = '+';
	for (int i = -1;i < 2;i++) {
		//cout << "	" << i << "/" << Data[y][x+i] << ":";
		if (i==0) continue;
		if(x+i>=0 && x+i < W && Data[y][x+i] == target) {
			dl(x+i,y,target);
		}
		if(y+i>=0 && y+i < H && Data[y+i][x] == target) {
			dl(x,y+i,target);
		}
	}	
	return;
}
int main() {
	for(;;) {
		int ans = 0;
		cin >> H >> W;
		if (H == 0 && W == 0) break;
		
		for (int i = 0;i < H;i++) {
			cin >> Data[i];
		}
		for (int i = 0;i < H;i++) {
			for (int j = 0;j < W;j++) {
				if (Data[i][j] != '+') {
					ans++;
					dl(j,i,Data[i][j]);
				}
			}
		}
		cout << ans << endl;
	}
	return 0;
}