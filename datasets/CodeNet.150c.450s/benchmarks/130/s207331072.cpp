#include <iostream>
#include <vector>
using namespace std;
#define D

#ifdef D
int A[100 + 1][100 + 1] = { 0 };
int b[100 + 1] = { 0 };

void mul(int i,  int M)
{
	int res = 0;
	for (size_t m = 0; m < M; m++)
	{
		res += A[i][m] * b[m];
	}
	cout << res << endl;
}

int main(void)
{
	int N, M;
	cin >> N >> M;
	for (size_t n = 0; n < N; n++)
	{
		for (size_t m = 0; m < M; m++)
		{
			cin >> A[n][m];
		}

	}
	for (size_t m = 0; m < M; m++)
	{
		cin >> b[m];
	}
	for (size_t i = 0; i < N; i++)
	{
		mul(i, M );
	}

	return 0;
}
#endif // D