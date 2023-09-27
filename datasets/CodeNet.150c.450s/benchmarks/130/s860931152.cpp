#include <iostream>
using namespace std;
 
int main()
{
	int m, n;
	
	cin >> n >> m;
	
	int *a = new int[n * m];
	int *b = new int[m];
	int *c = new int[n];
	
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i * m + j];
	
	for (int j = 0; j < m; j++)
		cin >> b[j];

	for (int i = 0; i < n; i++) {
		c[i] = 0;
		for (int j = 0; j < m; j++)
			c[i] += a[i * m + j ] * b[j];
		cout << c[i] << endl;
	}
	
	delete [] a;
	delete [] b;
	delete [] c;
	
	return 0;
}