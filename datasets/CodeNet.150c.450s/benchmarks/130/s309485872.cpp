#include<iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;

	int a[n][m];
	int b[m];
	
	for (int i = 0; i < n; i++){
		for(int j = 0; j < m; j++){
			int x;
			cin >> x;
			a[i][j] = x;
		}
	}
	
	for (int i = 0; i < m; i++){
		int y;
		cin >> y;
		b[i] = y;
	}

	for (int i = 0; i < n; i++){
		int ans = 0;
		for(int j = 0; j < m; j++){
			ans += a[i][j] * b[j];
		}
		cout << ans << endl;
	}
	return 0;
}