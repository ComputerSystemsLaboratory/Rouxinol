#include<iostream>
using namespace std;

int main()
{
	const int max_n=100, max_m = 100;
	int n, m;
	int a[max_n][max_m] = { 0 };
	int b[max_m] = { 0 };
	//input
	cin >> n >> m;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> a[i][j];
		}
	}
	for (int i = 0; i < m; i++) {
		cin >> b[i];
	}
	

	for (int i = 0; i < n; i++) {
		int sum = 0;
		for (int j = 0; j < m; j++) {
			sum += a[i][j] * b[j];
		}
		cout << sum << endl;
	}
    return 0;
}