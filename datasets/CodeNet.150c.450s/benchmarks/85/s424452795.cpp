#include<iostream>
#include<cstdio>
#include<algorithm>
#define Lens 105

using namespace std;
int p[Lens];
int C[Lens][Lens];
int N;

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> p[i - 1] >> p[i];
		C[i][i] = 0;
	}
	for (int k = 1; k < N; k++)
	{
		for (int i = 1; i <= N-k; i++)
		{
			int j = i + k;
			C[i][j] = C[i][i] + C[i + 1][j]+p[i-1]*p[i]*p[j];
			for (int t = i+1; t < j; t++)
			{                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                
				C[i][j] = min(C[i][j], C[i][t] + C[t+1][j] + p[i - 1] * p[t] * p[j]);
			}
		}
	}
	cout << C[1][N]<<endl;

	return 0;

}
