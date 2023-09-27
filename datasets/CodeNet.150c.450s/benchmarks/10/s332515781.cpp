#include <iostream>
using namespace std;

int rnum[4][3][10];

int main(void)
{
	int n;
	int b, f, r, v;
	int i, j, k, l;
	
	cin >> n;
	
	for (i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		rnum[b - 1][f - 1][r - 1] += v;
	}
	
	for (i = 0; i < 4; i++){
		for (j = 0; j < 3; j++){
			for (k =  0; k < 10; k++){
				cout << " " <<  rnum[i][j][k];
			}
			cout << endl;
		}
		if (i < 3){
			for (l = 0; l < 20; l++){
				cout << "#";
			}
			cout << endl;
		}
	}
	
	return (0);
}