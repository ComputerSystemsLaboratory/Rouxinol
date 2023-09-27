#include<iostream>
#include<algorithm>
using namespace std;
#define REP(i,n) for(unsigned int i=0;i<(n);i++)
#define INF 1<<16
int main()
{
	while (true)
	{
		int A[10][10];
		REP(i, 10)REP(j, 10)
		{
			if (i == j)A[i][j] = 0;
			else A[i][j] = INF;
		}
		int N,M=-1;
		cin >> N;
		if (N == 0)break;
		REP(i, N)
		{
			int a, b, c;
			cin >> a >> b >> c;
			M = max(M, min(a, b));
			A[a][b] = c;
			A[b][a] = c;
		}
		REP(k, 10)REP(i, 10)REP(j, 10)
		{
			A[i][j] = min(A[i][j], A[i][k] + A[k][j]);
		}
		int min_value = INF;
		int min_index = -1;
		REP(i, M+1)
		{
			int sum = 0;
			REP(j, M+2)
			{
				sum += A[i][j];
			}
			if (min_value > sum)
			{
				min_index = i;
				min_value = sum;
			}
			else if (min_value == sum)
			{
				min_index = min(min_index, int(i));
			}
		}
		cout << min_index << " " << min_value << endl;
	}
	return 0;
}