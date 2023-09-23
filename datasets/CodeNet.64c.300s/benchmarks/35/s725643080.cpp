#include<iostream>

using namespace std;

#define MAX 100

int A[MAX][MAX];

int main(int argc, char const *argv[])
{
	int n,k,m,p;
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>k>>m;
		for (int j = 0; j < m; ++j)
		{
			cin>>p;
			A[k-1][p-1]=1;
		}
	}

	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			if (j!=0)
			{
				cout<<" ";
			}
			cout<<A[i][j];
		}
		cout<<endl;
	}

	return 0;
}
