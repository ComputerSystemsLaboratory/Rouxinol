#include <iostream>

using namespace std;

int main(){
	int house[4][3][10] = {};
	int n, b, r, f, v;
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> b >> r >> f >> v;
		house[b-1][r-1][f-1] += v;
	}

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++){
				if(i != 0 && j == 0 && k == 0){
					for(int l = 0; l < 20; l++) cout << "#";
					cout << endl;
				}
				cout << " " << house[i][j][k];
			}
			cout << endl;
		}
	}

	return 0;
}