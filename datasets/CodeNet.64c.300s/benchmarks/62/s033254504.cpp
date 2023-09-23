#include<iostream>
using namespace std;

int main(){
	int n, m;
	cin >> n >> m;
	int a[100][100], b[100];
	for(int k = 0; k < n*m; k++){
		int i = k / m;
		int j = k - m*i;
		cin >> a[i][j];
	}
	for(int j = 0; j < m; j++){
		cin  >> b[j];
	}
	for(int i = 0; i < n; i++){
		int c = 0;
		for(int j = 0; j < m; j++) c += a[i][j] * b[j];
		cout << c << endl;
	}
	return 0;
}