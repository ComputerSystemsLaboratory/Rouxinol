#include <iostream>
#include <cstring>
#define rep(i,n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
	int a[101][101];
	memset(a,0,sizeof(a));
	int r,c;
	cin >> r >> c;

	rep(i,r)
	{
		rep(j,c)
		{
			cin >> a[i][j];
		}
	}

	rep(i,r)
	{
		int sum = 0;
		rep(j,c) sum += a[i][j];
		a[i][c] = sum;
	}

	rep(i,c)
	{
		int sum = 0;
		rep(j,r) 
		{
			sum += a[j][i];
		}
		a[r][i] = sum;
	}

	int sum = 0;
	rep(i,r) sum += a[i][c];

	a[r][c] = sum;

	rep(i,r+1)
	{
		rep(j,c+1)
		{
			if(j == 0) cout << a[i][j];
			else cout << " " << a[i][j];
		}
		cout << endl;
	}
	return 0;
}