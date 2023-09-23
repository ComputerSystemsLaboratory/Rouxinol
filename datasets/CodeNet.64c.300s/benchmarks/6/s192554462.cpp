#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int n, b, f, r, v;
	int a[4][3][10] = {0};
	cin >> n;

	for(int i = 0; i < n; i++){
		cin >> b >> f >> r >> v;
		a[b-1][f-1][r-1] += v;
	}

	for(int i = 0; i < 4; i++){
		for(int j = 0; j < 3; j++){
			for(int k = 0; k < 10; k++){
				printf(" %d", a[i][j][k]);
			}
			printf("\n");
		}
		if(i != 3) printf("####################\n");
	}

	return 0;
}