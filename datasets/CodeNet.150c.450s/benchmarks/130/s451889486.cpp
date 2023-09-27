#include<iostream>
using namespace std;
int main(){
	int m, n, c[100] = {};
	cin >> n;
	cin >> m;
	int b[100];
	int a[100][100];
	for (int i = 0; i < n; i++){
		for (int i2 = 0; i2 < m; i2++){
			cin >> a[i][i2];
		}
	}
	for (int i3 = 0; i3 < m; i3++){
		cin >> b[i3];
	}
	for (int i4 = 0; i4 < n; i4++){
		for (int i5 = 0; i5 < m; i5++){
			c[i4] += a[i4][i5] * b[i5];
		}
	}
	for (int i6 = 0; i6 < n; i6++){
		cout << c[i6] << endl;
	}
	return 0;
}