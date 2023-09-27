#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;

int main(int argc, char* argv[]) {
	int n, m;
	cin >> n >> m;
	int A[n][m];
	int B[m][1];
	int C = 0;

	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			cin >> A[i][j];

	for(int i = 0; i < m; i++)
		cin >> B[i][0];

	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			C += A[i][j] * B[j][0];
		}
		printf("%d\n",C);
		C = 0;
	}


	return 0;

}