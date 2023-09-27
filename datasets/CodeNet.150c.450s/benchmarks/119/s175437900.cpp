#include <iostream>
using namespace std;

int a[52][52];
int w, h;
int yy[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int xx[8] = {0, 1, -1, 0, -1, 1, -1, 1};
int solve(int y, int x){
	if(a[y][x] == 0)return 0;
	a[y][x] = 0;
	int ans = 0;
	for(int i = 0;i < 8;i++){
		ans += solve(y+yy[i], x+xx[i]);
	}
	return 1;
}

int main(){
	int y, x;
	while(cin >> w >> h, w){
		int ans = 0;
		fill((int*)a, (int*)(a+52), 0);
		for(int i = 1;i <= h;i++)
		for(int j = 1;j <= w;j++)cin >> a[i][j];
		for(int i = 1;i <= h;i++){
			for(int j = 1;j <= w;j++){
				if(a[i][j])ans += solve(i, j);
			}
		}
		cout << ans << endl;
	}
	return 0;
}