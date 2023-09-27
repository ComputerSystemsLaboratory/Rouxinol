#include<iostream>
using namespace std;
int main(){
	int i, j, k, n, l;
	int b, f, r, v;
	int a[5][4][11] = { 0 };
	cin >> n;

	for (l = 0; l < n; l++){
		cin >> b >> f >> r >> v;
		a[b][f][r] = a[b][f][r]+ v;
		if (a[b][f][r]>9){
			a[b][f][r] = 9;
		}
		if (a[b][f][r] < 0){
			a[b][f][r] = 0;
		}
	}
	for (i = 1; i <5; i++){
		for (j = 1; j < 4; j++){
			for (k = 1; k < 11; k++){
				cout <<" "<< a[i][j][k] ;
			}
			cout << endl;
		}
		if (i == 4){ break; }
		cout << "####################" << endl;
	}
	return 0;
}