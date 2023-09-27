#include <iostream>
using namespace std;

int main(void) {

	int n, m;
	cin >> n >> m;

	int A[n][m];
	int b[m];

	for(int i=0;i<n;i++) {
		for(int j=0;j<m;j++) {
			cin >> A[i][j];
		}
	}
	for(int i=0;i<m;i++) {
		cin >> b[i];
	}

	for(int i=0;i<n;i++) {
		int tmp = 0;
		for(int j=0;j<m;j++) {
			tmp += A[i][j] * b[j];
		}
		cout << tmp << endl;
	}

	return 0;
}