#include <iostream>
#include <cstring>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int a[101][101];
	int b[101];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));

	int n,m;
	cin >> n >> m;

	rep(i,n)
	{
		rep(j,m)
		{
			cin >> a[i][j];
		}
	}

	rep(i,m)
	{
		cin >> b[i];
	}

	rep(i,n)
	{
		long long sum = 0;
		rep(j,m)
		{
			sum += a[i][j] * b[j];
		}
		cout << sum << endl;
	}


	return 0;
}