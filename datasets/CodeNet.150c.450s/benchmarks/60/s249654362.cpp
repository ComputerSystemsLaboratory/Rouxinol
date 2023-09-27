#include<iostream>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int matrix[n][n];
	for(int i=0; i<n; i++){
		for(int j=0; j<n; j++){
			matrix[i][j] = 0;
		}
	}

	for(int i=0; i<n; i++){
		int u, k, v;
		cin >> u >> k;
		for(int j=0; j<k; j++){
			cin >> v;
			matrix[u-1][v-1] = 1;
		}
	}
		
	for(int i=0; i<n; i++){
		cout << matrix[i][0];
		for(int j=1; j<n; j++){
			cout << " " << matrix[i][j];
		}
		cout << endl;
	}

	return 0;
}

	