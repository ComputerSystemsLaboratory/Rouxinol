#include<iostream>
using namespace std;
int main(){
	int n, b, f, r, v;
	int d[4][3][10];
	for (int a = 0; a < 4; a++){
		for (int b = 0; b < 3; b++){
			for (int c = 0; c < 10; c++){
				d[a][b][c] = 0;
			}
		}
	}
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		d[b-1][f-1][r-1] += v;
	}
	for (int j = 0; j < 4; j++){
		for (int k = 0; k < 3; k++){
			for (int l = 0; l < 10; l++)
			{
					cout << ' ' << d[j][k][l];
			}
			cout << endl;
		}
		if (j != 3){
			cout << "####################" << endl;
		}
	}

		





 










	return 0;
}