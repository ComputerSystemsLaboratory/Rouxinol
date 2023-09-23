#include <iostream>
using namespace std;

int main() {	
	int n, m;
	int a[100][100]={0}, b[100]={0}, c[100]={0};
	
	cin >> n >> m;
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++)	{
			cin >> a[i][j];
		}
	}
	for (int i=0; i<m; i++) {
		cin >> b[i];
	}
	
	for (int i=0; i<n; i++) {
		for (int j=0; j<m; j++)	{
			c[i] += a[i][j] * b[j];
		}
	}
	
	for (int i=0; i<n; i++) {
		cout << c[i] << endl;
	}
	
	return 0;
}
