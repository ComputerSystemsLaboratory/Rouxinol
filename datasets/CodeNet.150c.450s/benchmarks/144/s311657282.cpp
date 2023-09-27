#include <iostream>
using namespace std;

int main(){
	int n, m, l, i, j, k;
	cin >> n >> m >> l;
	long int a[n][m], b[m][l], c[n][l];
	for(i = 0; i <= n-1; i++){
		for(j = 0; j <= m-1; j++){
			cin >> a[i][j];
		}
	}
	for(i = 0; i <= m-1; i++){
		for(j = 0; j <= l-1; j++){
			cin >> b[i][j];
		}
	}
	
	for(i = 0; i <= n-1; i++){   
		for(j = 0; j <= l-1; j++){
			c[i][j] = 0;
		}
	}
	
	for(i = 0; i <= n-1; i++){
		for(j = 0; j <= l-1; j++){
			for(k = 0; k <= m-1; k++){
				c[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	
	for(i = 0; i <= n-1; i++){
		for(j = 0; j <= l-2; j++){
			cout << c[i][j] << ' ';
		}
		cout << c[i][l-1] << endl;
	}
	
	return 0;
}