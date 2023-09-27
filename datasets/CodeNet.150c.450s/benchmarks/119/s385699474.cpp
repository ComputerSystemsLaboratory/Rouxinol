#include <iostream>
using namespace std;

int c[100][100],ans;

int search(int x, int y){
	if(c[x][y] == 1){
		c[x][y] = 2;
		search(x-1, y-1);
		search(x-1, y);
		search(x-1, y+1);
		search(x, y-1);
		search(x, y+1);
		search(x+1, y-1);
		search(x+1, y);
		search(x+1, y+1);
	return 1;	
	}
	else return 0;
}

int main(){
	int w,h,i,j;
	while(cin >> w >> h && w > 0 && h >0){
		for(i = 1; i <= 99; i++){
			for(j = 1; j <= 99; j++){
				c[i][j] = 0;
			}
		}
		ans = 0;
		for(i = 1; i <= h; i++){
			for(j = 1; j <= w; j++){
				cin >> c[i][j];
			}
		}
		for(i = 1; i <= h; i++){
			for(j = 1; j <= w; j++){
				if(search(i, j) == 1){
					ans++;
				}
			}
		}
		cout << ans << endl;
	}
}