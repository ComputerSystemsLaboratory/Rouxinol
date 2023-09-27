#include <iostream>
using namespace std;

int main() {
	int r,c;
	cin>>r>>c;
	int a[r][c],b[r+1][c+1];
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cin>>a[i][j];
			b[i][j]=a[i][j];
		}
	}

	for (int i = 0; i < r; ++i)
	{
		b[i][c]=0;
		for (int j = 0; j < c; ++j)
		{
			b[i][c]+=a[i][j];
		}
		
	}
	for (int i = 0; i < c; ++i)
	{
		b[r][i]=0;
		for (int j = 0; j < r; ++j)
		{
			b[r][i]+=a[j][i];
		}
		
	}

	b[r][c]=0;
	for (int i = 0; i < r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			b[r][c]+=a[i][j];
		}
	}

	for (int i = 0; i <= r; ++i)
	{
		for (int j = 0; j < c; ++j)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<b[i][c]<<endl;
	}


	return 0;
}