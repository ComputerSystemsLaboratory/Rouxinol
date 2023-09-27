#include <iostream>
#include <vector>

using namespace std;

#define D

#ifdef D
int A[100][100] = {};
int B[100][100] = {};
int main(void)
{
	int n, m, l;
	cin >> n >> m >> l;

	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < m; j++)
		{
			cin >> A[i][j];

		}
	}
	for (size_t i = 0; i < m; i++)
	{
		for (size_t j = 0; j < l; j++)
		{
			cin >> B[i][j];
		}
	}
	for (size_t i = 0; i < n; i++)
	{
		for (size_t j = 0; j < l; j++)
		{
			if (j != 0)
				cout << " ";
			long long ans = 0;
			for (size_t k = 0; k < m; k++)
			{
				ans += A[i][k] * B[k][j];
			}
			cout << ans;
		}
		cout << endl;
	}

	return 0;
}

#endif // D