#include <iostream>
using namespace std;

int a[20][20];

int root(int x, int y){
	if (x == 0) { 
		if(a[0][y - 1] == -1)return a[0][y-1] = root(0, y - 1);
		else return a[0][y - 1];
	}
	if (y == 0) {
		if (a[x - 1][0] == -1)return a[x-1][0] = root(x - 1, 0);
		else return a[x - 1][0];
	}
	if (a[x - 1][y] == -1) a[x - 1][y] = root(x - 1, y);
	if (a[x][y - 1] == -1) a[x][y - 1] = root(x, y - 1);
	return a[x - 1][y] + a[x][y - 1];
}

int main(){
	int ax, by, n, x, y;
	while(cin >> ax >> by >> n){
		if (!ax && !by) break;
		for (int i = 0; i < 20; i++) {
			for(int j = 0;j<20;j++){
				a[i][j] = -1;
			}
		}
		a[0][0] = 1;
		for(int i = 0;i<n;i++){
			cin >> x >> y;
			a[x-1][y-1] = 0;
		}
		int temp = root(ax-1, by-1);
		cout << root(ax-1, by-1) << endl;
	}
	return 0;
}