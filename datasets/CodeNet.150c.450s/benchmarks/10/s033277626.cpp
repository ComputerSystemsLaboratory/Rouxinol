#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main(){

	const int N_MAX = 14;
	int n,b,f,r,v;
	int num[5][4][11] = { { { 0 } } };


	cin >> n;

	for (int i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		num[b][f][r] = num[b][f][r] + v;
	}

	for (int i = 1; i < 5; i++){
		for (int j = 1; j < 4; j++){
			for (int k = 1; k < 11; k++){
				cout << " " << num[i][j][k];
			}
			cout << endl;
		}
		if (i != 4) cout << "####################" << endl;
	}


	return 0;
}