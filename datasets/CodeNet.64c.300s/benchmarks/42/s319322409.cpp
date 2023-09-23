#include<iostream>
#include<algorithm>
using namespace std;

int main(){
	int n;

	while (cin >> n, n != 0){
		int o;
		int point[21][21] = { 0 };
		int X, Y;
		char dir;
		int move;
		int x = 10, y = 10;
		int count = 0;

		for (int i = 0; i < n; i++){
			cin >> X >> Y;
			point[X][Y] = 1;
		}

		cin >> o;

		for (int i = 0; i < o; i++){
			cin >> dir >> move;

			for (int j = 0; j < move; j++){
				if (dir == 'N'){
					y += 1;
				}
				if (dir == 'E'){
					x += 1;
				}
				if (dir == 'S'){
					y -= 1;
				}
				if (dir == 'W'){
					x -= 1;
				}
				if (point[x][y] == 1){
					count++;
					point[x][y] = 0;
				}
			}
		}
		if (n == count) cout << "Yes" << endl;
		else cout << "No" << endl;
	}

	return 0;
}