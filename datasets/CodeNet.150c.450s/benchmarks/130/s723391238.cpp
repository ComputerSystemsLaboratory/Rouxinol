#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;
typedef vector<int> vi;
typedef vector< vi > vvi;
int main() {
	int n, m;
	cin >> n >> m;
	vector< vector <int> > a(n,vector<int>(m));
	vector <int> b(m);
	vector <int> c(n);
	for (int i = 0; i < n; i++) {
		c[i] = 0;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i] += a[i][j] * b[j];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << c[i] << endl;
	}
}