#include "iostream"
using namespace std;

int main(int argc, char const *argv[])
{
	int n,m=0;
	cin >> n >> m;

	int A[n][m];
	int b[m];
	int ans[n];
	int i,j=0;

	for (i=0;i<n;++i)
	{
		ans[i]=0;
	}

	for(i=0;i<n;i++)
	{
		for (j=0;j<m;++j)
		{
			cin >> A[i][j];
		}
	}

	// for(i=0;i<n;i++)
	// {
	// 	for (j=0;j<m;++j)
	// 	{
	// 		cout << A[i][j];
	// 	}
	// 	cout << endl;
	// }

	for (i=0;i<m;++i)
	{
		cin >> b[i];
	}

	// for (i=0;i<m;++i)
	// {
	// 	cout << b[i] << endl;
	// }

	for (i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			ans[i] += A[i][j] * b[j];
			// cout << "ans[" << i <<"]=" << ans[i] << endl;
		}
	}

	for(i=0;i<n;i++)
	{
		cout << ans[i]<< endl;
	}
	return 0;
}
