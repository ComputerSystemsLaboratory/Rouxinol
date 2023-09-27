#include <iostream>
using namespace std;

int main(){
	int n, m, l;
	int i, j ,k;

	cin >> n >> m >> l;

	int a[n][m];
	int b[m][l];

	for(i=0; i<n; i++){
		for(j=0; j<m; j++){
			cin >> a[i][j];
		}
	}
	for(i=0; i<m; i++){
		for(j=0; j<l; j++){
			cin >> b[i][j];
		}
	}

	for(i=0; i<n; i++){
		for(j=0; j<l; j++){
			long long sum = 0;
			for(k=0; k<m; k++){
				sum += a[i][k] * b[k][j];
			}
			if(j) cout << " ";
			cout << sum;
		}
		cout << endl;
	}

}