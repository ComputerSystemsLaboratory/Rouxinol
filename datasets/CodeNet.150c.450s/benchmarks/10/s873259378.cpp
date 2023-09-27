#include <stdio.h>
#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	int n, b, f, r, v, bfr[4][3][10] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> b >> f >> r >> v; bfr[b-1][f-1][r-1]+=v;
	}
	for (int i = 0; i < 4; i++){
		for (int j = 0; j < 3; j++){
			for (int k = 0; k < 10; k++){
				printf(" %d",bfr[i][j][k]);
			}
			printf("\n");
		}
		for (int l = 0; i < 3 && l < 20; l++) {
			printf("#");
			if(l==20-1) printf("\n");
		}
	}
}