#include<iostream>
using namespace std;

int main()
{
	int r, c;
	int i, j;
	int a;
	int sum2[100] = {};
	int sum3 = 0;

	cin >> r >> c;
	for (i = 0; i<r; i++) {
		int sum = 0;
		for (j = 0; j<c; j++) {
			cin >> a;
			cout << a << " ";

			sum += a;
			sum2[j] += a;
			sum3 += a;
		}
		cout << sum << endl;
	}
	for (i = 0; i < c; i++)
		cout << sum2[i] << " ";
	cout << sum3 << endl;

	return 0;
}