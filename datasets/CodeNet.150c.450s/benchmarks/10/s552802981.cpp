#include <iostream>
#include <cstdio>
using namespace std;

int main(){
	int a[4][3][10] = {0};
	int n;
	int b, f, r, v;
	cin >> n;
	for (int x = 0; x < n; x++){
		cin >> b >> f >> r >> v;
		for (int i = 0; i < 4; i++){
			for (int j = 0; j < 3; j++){
				for (int k = 0; k < 10; k++){
					if (i==b-1&&j==f-1&&k==r-1){
						a[i][j][k] += v;
					}
					//cout << " " << a[i][j][k];
				}
				//cout << endl;
			}
			//cout << "####################" << endl;
		}
	}
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 10; k++){
				if (i == b - 1 && j == f - 1 && k == r - 1){
					//a[i][j][k] += v;
				}
				cout << " " << a[i][j][k];
			}
			cout << endl;
		}
		if (i != 3)cout << "####################" << endl;
	}
	return 0;
}