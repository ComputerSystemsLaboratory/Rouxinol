#include<iostream>
using namespace std;
int main(){
	int hyo[1000][1000] = { 0 };
	int r, c;
	cin >> r;
	cin >> c;
	for (int i = 0; i < r; i++){
		for (int i2 = 0; i2 < c; i2++){
			cin >> hyo[i][i2];
		}
	}
	for (int i = 0; i < r; i++){
		for (int i2 = 0; i2 < c; i2++){
			hyo[i][c] += hyo[i][i2];
		}
	}
	for (int i = 0; i < c; i++){
		for (int i2 = 0; i2 < r; i2++){
			hyo[r][i] += hyo[i2][i];
		}
	}
	for (int i = 0; i < r; i++){
		hyo[r][c] += hyo[i][c];
	}
	for (int i = 0; i < r + 1; i++){
		for (int i2 = 0; i2 < c; i2++){
			cout << hyo[i][i2] << " ";
		}
		cout << hyo[i][c] << endl;
	}
	return 0;
}