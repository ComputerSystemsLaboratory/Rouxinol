#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;

	vector< vector<int> > a(n, vector<int>(m));
	vector<int> b(m), c(n, 0);

	for (vector<int>::size_type i = 0; i < n; i++) {
		for (vector<int>::size_type j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (vector<int>::size_type i = 0; i < m; i++)
		cin >> b[i];

	for (vector<int>::size_type i = 0; i < n; i++) {
		for (vector<int>::size_type j = 0; j < m; j++) {
			c[i] += a[i][j] * b[j];
		}
		cout << c[i] << "\n";
	}
}