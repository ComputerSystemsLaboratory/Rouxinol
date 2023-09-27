#include<iostream>
#include<string>
using namespace std;
int x[13][32], y[13] = { 0,31,29,31,30,31,30,31,31,30,31,30,31 }, sum, n, m; string T[7] = { "Sunday","Monday","Tuesday","Wednesday","Thursday","Friday","Saturday" };
int main() {
	sum = 4;
	for (int i = 1; i <= 12; i++) {
		for (int j = 1; j <= y[i]; j++) {
			x[i][j] = sum % 7;
			sum++;
		}
	}
	while (true) {
		cin >> n >> m; if (!n) { break; }
		cout << T[x[n][m]] << endl;
	}
}