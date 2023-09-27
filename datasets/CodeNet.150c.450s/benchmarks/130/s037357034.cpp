#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	vector<vector<int> > a(n,vector<int>(m));
	vector<int> b(m);
	vector<int> c(n);
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int k = 0; k < m; k++) {
		cin >> b[k];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			c[i] = c[i] + a[i][j] * b[j];
		}
	}
	for (int i = 0; i < n; i++) {
		cout << c[i] << endl;
	}
}
