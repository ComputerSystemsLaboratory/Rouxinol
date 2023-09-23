#include <iostream>
using namespace std;

unsigned long long int i, j, k,counter,a,b;
unsigned long long int t, y;
unsigned long long int ef[110][110];
int main() {
	counter = 0;
	a = 0;
	b = 0;
	cin >> t >> y;
	for (i = 0;i < t;i++) {
		for (j = 0;j < y;j++) {
			cin >> ef[i][j];
			cout << ef[i][j] << ' ';
			a += ef[i][j];
		}
		ef[i][y] = a;
		cout << ef[i][y] << endl;
		a = 0;
	}
	///////////////////
	for (j = 0;j <= y;j++) {
		for (i = 0;i < t;i++) {
			k += ef[i][j];
		}
		ef[t][j] = k;
		k = 0;
	}
	////////////////
	for (i = 0;i < y;i++) {
		cout << ef[t][i] << ' ';
	}
	cout << ef[t][y] << endl;
	return 0;
}