#include <iostream>

using namespace std;

int main() {

	int n;
	int b, f, r, v;
	int room[4][3][10];
	for (int j = 0; j < 4; j++){
		for (int k = 0; k < 3; k++){
			for (int l = 0; l < 10; l++){
				room[j][k][l] = 0;
			}
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> b >> f >> r >> v;
		room[b-1][f-1][r-1] += v;
	}
	for (int j = 0; j < 4; j++){
		for (int k = 0; k < 3; k++){
			for (int l = 0; l < 10; l++){
				cout <<" " << room[j][k][l];
			}
			cout << endl;
		}
		if(j != 3){for (int m = 0; m < 20; m++){
			cout << "#";
		}
		cout << endl;}
	}

	return 0;
}