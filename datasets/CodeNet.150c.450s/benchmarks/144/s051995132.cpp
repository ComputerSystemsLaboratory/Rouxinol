#include<iostream>
using namespace std;
int main(){
	int n, m, l, a[100][100] = { 0 }, b[100][100] = { 0 };
	long long ans[100][100] = { 0 }, sum;
	cin >> n >> m >> l;
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++){
		for (int j = 0; j < l; j++){
			cin >> b[i][j];
		}
	}
	for (int y = 0; y < n; y++){
		for (int x = 0; x < l; x++){
			sum = 0;
			for (int k = 0; k < m; k++){
				sum = sum + a[y][k] * b[k][x];
			}
			ans[y][x] = sum;
		}
	}
	for (int i = 0; i < n; i++){
		for (int j = 0; j < l; j++){
			cout << ans[i][j];
			if (j != l - 1)
				cout << " ";
		}
		cout << endl;
	}
}
