#include <iostream>

using namespace std;

int  a[100][100] = {0};
int  b[100][100] = {0};
long c[100][100] = {0};

int main(int argc, const char * argv[])
{
	int n, m, l;
	cin >> n >> m >> l;

	// read
	for(int i = 0; i < n; ++i)
	{
		for(int k = 0; k < m; ++k)
		{
			cin >> a[i][k];
		}
	}
	for(int k = 0; k < m; ++k)
	{
		for(int j = 0; j < l; ++j)
		{
			cin >> b[k][j];
		}
	}

	// calculate
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < l; ++j)
		{
			for(int k = 0; k < m; ++k)
			{
				c[i][j] += a[i][k] * b[k][j];
			}
		}
	}

	// write
	for(int i = 0; i < n; ++i)
	{
		for(int j = 0; j < l; ++j)
		{
			cout << c[i][j];
			if(j != l - 1)
			{
				cout << " ";
			}
			else
			{
				cout << endl;
			}
		}
	}
	
    return 0;
}