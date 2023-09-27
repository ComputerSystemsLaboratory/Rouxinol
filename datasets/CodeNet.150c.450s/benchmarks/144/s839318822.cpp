#include<iostream>
#define Rep(n) for(int j = 0; j < n; j++)
using namespace std;
int main() {
	int n, m, l;
	cin >> n >> m >> l;
	int a[100][100];
	int b[100][100];
	long long c[100][100] = { 0 };
	Rep(n){
		for (int i = 0; i < m; i++){
			cin >> a[j][i];
		}
	}
	Rep(m) {
		for (int i = 0; i < l; i++){
			cin >> b[j][i];
		}
	}
	Rep(n){
		for (int i = 0; i < l; i++){
			for (int k = 0; k < m; k++){
				c[j][i] += (a[j][k] * b[k][i]);
			}
		}
	}
	Rep(n) {
		for (int i = 0; i < l; i++){
			cout << c[j][i];
			if (i == l - 1){
				cout << endl;
			}
			else cout << ' ';
		}
	}
	return 0;
}