#include <iostream>

int main(void)
{
	using namespace std;
	
	int n,m;
	cin >> n;
	cin >> m;

	int matA[n][m];
	int vecB[m];
	for(int i = 0; i<n; i++){
		for(int j = 0; j<m; j++){
			cin >> matA[i][j];
		}
	}

	for(int i = 0; i<m; i++){
		cin >> vecB[i];
	}

	int tempans;
	for(int i = 0; i<n; i++){
		tempans = 0;
		for(int j = 0; j<m; j++){
			tempans += matA[i][j] * vecB[j];
		}
		cout << tempans << endl;
	}

	return 0;
}