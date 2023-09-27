#include <string>
#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;

int main(){
	int n;
	cin >> n;
	int a[100][2];
	for ( int i = 0; i < n; i++ ) {
		cin >> a[i][0];
		cin >> a[i][1];
	}
	int c[100][100] = {0};
	for ( int i = 2; i <= n; i++ ) {
		for ( int j = 0; j <= n - i; j++ ) {
			int x = 0;
			for ( int k = 1; k < i; k++ ) {
				int y = 0;
				y = c[j][k] + c[j+k][i-k] + a[j][0] * a[j+k][0] * a[j+i-1][1];
				if ( x == 0 || x > y ) x = y;
			}
			c[j][i] = x;
		}
	}
	cout << c[0][n] << endl;
	return 0;
}