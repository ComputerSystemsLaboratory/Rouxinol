#include <iostream>
using namespace std;
  
int main()
{
	int m, n, l;
	long c;
	cin >> n >> m >> l;
	int *a = new int[n * m];
	int *b = new int[m * l];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> a[i * m + j];
	for (int i = 0; i < m; i++)
		for (int j = 0; j < l; j++)
			cin >> b[i * l + j];
	for (int i = 0; i < n; i++)
		for (int j = 0; j < l; j++) {
			c = 0; 
			for ( int k = 0; k < m; k ++) 
				c += a[i * m + k] * b[l * k + j];
			cout << c;
			if (j < l -1)
				cout << ' ';
			else
				cout << endl;		
		}
	delete [] a;
	delete [] b;
    return 0;
}