#include <iostream>

using namespace std;



int main() {

	int a[100][100] = {{0}};

	int n;

	cin >> n;

	int u, k, v;

	for ( int i = 0; i < n; i++ ) {

		cin >> u >> k;

		for ( int j = 0; j < k; j++ ) {

			cin >> v;

			a[u - 1][v - 1] = 1;

		}

	}

	for ( int i = 0; i < n; i++ ) {

		for ( int j = 0; j < n; j++ ) {

			cout << a[i][j];

			if ( j != n - 1 ) cout << " ";

		}

		cout << endl;

	}

}