#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int n, m, l;
	cin >> n >> m >> l;

	vector< vector<int> > a(n, vector<int>(m, 0));
	vector< vector<int> > b(m, vector<int>(l, 0));
	vector< vector<long long> > c(n, vector<long long>(l, 0));

	//??\???
	for (vector<int>::size_type i = 0; i < n; i++) {
		for (vector<int>::size_type j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (vector<int>::size_type i = 0; i < m; i++) {
		for (vector<int>::size_type j = 0; j < l; j++) {
			cin >> b[i][j];
		}
	}

	//?¨????
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			for (int k = 0; k < m; k++) {
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	//??????
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < l; j++) {
			cout << c[i][j];
			if (j != l - 1)
				cout << " ";
		}
		cout << "\n";
	}

}