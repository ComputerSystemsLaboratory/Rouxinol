#include <iostream>
using namespace std;
int main(){
	int data[5][4][11] = {};
	int n, b, f, r, v, i, l, j, k;
	cin >> n;
	for (i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		data[b][f][r] = v + data[b][f][r];
		if (data[b][f][r]>9){
			data[b][f][r] = 9;
		}


	}
	for (i = 1; i < 5; i++){
		for (l = 1; l < 4; l++){
			for (j = 1; j < 11; j++){
				cout <<" "<< data[i][l][j];
			}
			cout << endl;
		}
		if (i == 1 || i == 2 || i == 3){ cout << "####################" << endl; }
	}

	return 0;

}