#include <iostream>
using namespace std;
  
int main()
{
	int m, n;
	cin >> n >> m;
	n += 1;
	m += 1;
	int *a = new int[n * m];
	for (int i = 0; i < n-1; i++)
		for (int j = 0; j < m-1; j++)
			cin >> a[i * m + j];
	for (int i = 0; i < n; i++) {
		a[i * m + m -1] = 0;
		for (int j = 0; j < m-1; j++)
			a[i * m + m -1] += a[i * m + j];
	}
	for (int i = 0; i < m; i++) {
		a[(n - 1) * m + i] = 0;
		for (int j = 0; j < n-1; j++)
			a[(n - 1) * m + i] += a[m * j + i];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cout << a[i * m + j];
			if(j < m -1)
				cout << ' ';
		}
		cout << endl;
	}
    delete [] a;
    return 0;
}