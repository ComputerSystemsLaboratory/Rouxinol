#include <iostream>
#include <cstring>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	long long a[101][101],b[101][101];
	long long c[101][101];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	memset(c,0,sizeof(c));
	int n,m,l;
	cin >> n >> m >> l;

	rep(i,n)
	{
		rep(j,m)
		{
			cin >> a[i][j];
		}
	}

	rep(i,m)
	{
		rep(j,l)
		{
			cin >> b[i][j];
		}
	}

	rep(i,n)
	{
		rep(j,l)
		{
			rep(k,m)
			{
				c[i][j] += a[i][k] * b[k][j];

			}
		}
	}

	rep(i,n)
	{
		rep(j,l)
		{
			if(j == 0)
			{
				cout << c[i][j];
			}
			else 
			{
				cout << " " << c[i][j];
			}
		}
		cout << endl;
	}
	return 0;
}