#include <iostream>
using namespace std;

int main(){
	int n, m, i, j;
	int sum = 0;

	cin >> n >> m;

	int a[n][m];
	int b[m];

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
		cin >> a[i][j];
		}
	}
	for(j=0; j<m; j++){
		cin >> b[j];
	}

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			sum = sum + a[i][j] * b[j]; 
		}
		cout << sum << endl;
		sum = 0;
	}


}