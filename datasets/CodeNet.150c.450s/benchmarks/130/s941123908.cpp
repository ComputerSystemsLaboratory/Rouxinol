#include <iostream>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int mat[n][m];
	for(int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> mat[i][j];
		}
	}
	int vec[m];
	for(int i = 0; i< m; i++){
		cin >> vec[i];
	}
	int sigma = 0, answer[m];
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			sigma += mat[i][j] * vec[j];
		}
		cout << sigma << endl;
		sigma = 0;
	}
	
}