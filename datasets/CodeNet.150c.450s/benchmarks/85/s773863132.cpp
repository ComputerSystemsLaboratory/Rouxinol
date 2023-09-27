#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cin >> n;

	vector<int> size(n+1);
	int r,c;
	for (int i=0;i<n;++i)
	{
		cin >> r >> c;
		size[i]=r;
	}
	size[n]=c;

	vector<vector<int>> m(n+1,vector<int>(n+1));
	const int infinity=32768*32767;

	// length=2
	for (int i=0;i<=n-(2-1);++i)
	{
		m[i][i+1]=0;
	}

	// length=3
	for (int i=0;i<=n-(3-1);++i)
	{
		m[i][i+2]=size[i]*size[i+1]*size[i+2];
	}

	// length>=4
	for (int i=4;i<=n+1;++i)
	{
		for (int j=0;j<=n-(i-1);++j)
		{
			int minimum=infinity;
			for (int k=1;k<=i-2;++k)
			{
				int sum=m[j][j+k]+m[j+k][j+i-1]+size[j]*size[j+k]*size[j+i-1];
				minimum=min(minimum,sum);
			}
			m[j][j+i-1]=minimum;
		}
	}

	cout << m[0][n] << endl;
}






