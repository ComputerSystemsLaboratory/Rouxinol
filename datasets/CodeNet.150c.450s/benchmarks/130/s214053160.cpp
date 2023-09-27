#include<iostream>

using namespace std;

int main(){
	int b[100], a[100][100];
	int n, m;
	int ans[100] = { 0 };
	cin >> n >> m;
	for (int i = 0; i < n; i++){
		for (int q = 0; q < m; q++){
			cin >> a[i][q];
		}
	}
	for (int i = 0; i < m; i++){
		cin >> b[i];
	}
	for (int i = 0; i < n; i++){
		for (int q = 0; q < m; q++){
			ans[i] += a[i][q] * b[q];
		}
	}
	for (int i = 0; i < n; i++){
		cout << ans[i] << endl;
	}
}