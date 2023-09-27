#include <iostream>
#include <cstring>
#define rep(i,n) for(int i=0;i<n;i++)

using namespace std;

int main()
{
	int a[4][3][10];
	memset(a,0,sizeof(a));

	int n;
	cin >> n;

	rep(i,n)
	{
		int b,f,r,v;
		cin >> b >> f >> r >> v;
		b--;
		f--;
		r--;

		a[b][f][r] += v;
	}

	rep(i,4)
	{
		if(i != 0)
		{
			cout << "####################" << endl;
		}
		rep(j,3)
		{
			rep(k,10)
			{
				cout << " " << a[i][j][k];
			}
			cout << endl;
		}
	}
	return 0;
}