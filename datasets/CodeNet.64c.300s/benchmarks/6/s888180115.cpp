#include<iostream>
using namespace std;
int main(){
	int n, i, j, k;
	int b, f, r, v;
	int house[4][3][10] = {};

	cin >> n;

	for (i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		house[b - 1][f - 1][r - 1] = house[b - 1][f - 1][r - 1] + v;
	}

	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			for (k = 0; k < 10; k++){
				if (house[i][j][k] < 0){
					cout << 0;
				}
				if (house[i][j][k]>9){
					cout << 9;
				}
				else{
					cout << " " << house[i][j][k];
				}
			}
			cout << endl;
		}
		if (i == 3){
			break;
		}
		cout << "####################" << endl;
	}

	return 0;
}