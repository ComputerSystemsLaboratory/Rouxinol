#include<iostream>
using namespace std;
int main(){
	int n, m, l, a[100][100] = {}, b[100][100] = {};
	long long int c[100][100] = {};
	cin >> n;
	cin >> m;
	cin >> l;
	for (int i = 0; i < n; i++){
		for (int i2 = 0; i2 < m; i2++){
			cin >> a[i][i2];
		}
	}
	for (int i = 0; i < m; i++){
		for (int i2 = 0; i2 < l; i2++){
			cin >> b[i][i2];
		}
	}
	for (int i = 0; i < n; i++){
		for (int i2 = 0; i2 < l; i2++){
			for (int i3 = 0; i3 < m; i3++){
				c[i][i2] += a[i][i3] * b[i3][i2];
			}
		}
	}
	for (int i = 0; i < n; i++){
		for (int i2 = 0; i2 < l - 1; i2++){
			cout << c[i][i2] << " ";
		}
		cout << c[i][l - 1] << endl;
	}
}