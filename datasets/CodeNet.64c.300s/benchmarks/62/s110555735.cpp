#include <iostream>
using namespace std;
int main()
{
	int n, m;
	cin >> n >> m;
	int mat[100][100] = {};
	int vec[100] = {};

	int i, j, k;
	for(i = 0; i < n; ++i){
		for(j = 0; j < m; ++j){
			cin >> k;
			mat[i][j] = k;
		}
	}

	for(i = 0; i < m; ++i){
		cin >> k;
		vec[i] = k;
	}

	for(i = 0; i < n; ++i){
		int t = 0;
		for(j = 0; j < m; ++j){
			t += mat[i][j] * vec[j];
		}
		cout << t << "\n";
	}

	return 0;
}