#include <stdio.h>
#include <iostream>

using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int mtrx[n][m];
	int vctr[m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			cin >> mtrx[i][j];
		}
	}
	for(int i = 0; i < m; i++){
		cin >> vctr[i];
	}
	int ans[n];
	for(int i = 0; i < n; i++){
		int sum = 0;
		for(int j = 0; j < m; j++){
			sum += mtrx[i][j] * vctr[j];
		}
		ans[i] = sum;
	}
	for(int i = 0; i < n; i++){
		cout << ans[i] << "\n";
	}
}
