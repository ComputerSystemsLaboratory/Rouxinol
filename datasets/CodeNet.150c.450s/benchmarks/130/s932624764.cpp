#include<iostream>
using namespace std;

int main() {
	int n, m,A[100][100],b[100];
	cin >> n >> m;
	for(int i=0;i<n;i++)
		for (int s = 0; s < m; s++) {
			int e;
			cin >> e;
			A[i][s] = e;
		}
	for (int s = 0; s < m; s++) {
		int w;
		cin >> w;
		b[s] = w;
	}
	for (int i = 0; i < n; i++) {
		int c=0;
		for (int t = 0; t < m; t++) {
			c += A[i][t] * b[t];
		}
		cout << c << endl;
	}
	return 0;
}