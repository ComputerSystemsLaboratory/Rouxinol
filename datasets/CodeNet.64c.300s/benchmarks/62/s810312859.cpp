#include <bits/stdc++.h>
using namespace std;

int main(){
	int n; cin >> n;
	int m; cin >> m;
	int matlix[n][m];
	int vec[m][1];
	int result[n][1];

	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> matlix[i][j];
		}
		result[i][0]=0;
	}
	for(int i=0;i<m;i++){
		cin >> vec[i][0];
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			result[i][0] = result[i][0] + (matlix[i][j] * vec[j][0]);
		}
		cout << result[i][0] << endl;
	}
	return 0;
}