#include <iostream>
using namespace std;

char a[22][22];
int w, h;
int yy[4] = {-1, 0, 0, 1}, xx[4] = {0, 1, -1, 0};
int solve(int y, int x){
	if(a[y][x] == '#')return 0;
	a[y][x] = '#';
	int ans = 0;
	for(int i = 0;i < 4;i++){
		ans += solve(y+yy[i], x+xx[i]);
	}
	return ans+1;
}

int main(){
	int y, x;
	while(cin >> w >> h, w){
		fill((char*)a, (char*)(a+22), '#');
		for(int i = 1;i <= h;i++)
		for(int j = 1;j <= w;j++){
			cin >> a[i][j];
			if(a[i][j] == '@'){y = i;x = j;}
		}
		cout << solve(y, x) << endl;
	}
	return 0;
}