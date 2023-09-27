#include <iostream>
using namespace std;

int main(void){
	int n, b, f, r, v;
	int inhabitant[4][3][10] = {0};

	cin >> n;

	for (int i = 0; i < n;i++){
		cin >> b >> f >> r >> v;

		inhabitant[b-1][f-1][r-1] += v;
	}

	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 10; k++){
				cout << " " << inhabitant[i][j][k];
			}
			cout << "\n";
		}
		if (i != 3){
			for (int m = 0; m < 20; m++){
				cout << "#";
			}
			cout << "\n";
		}
	}

	return 0;
}