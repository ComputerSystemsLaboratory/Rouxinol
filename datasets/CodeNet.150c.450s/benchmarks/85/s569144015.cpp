#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;
const int INF = 0x3f3f3f3f;
const int N = 1010;

int p[N];

int f[N][N];

int main()
{
	int n;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)	scanf("%d%d", &p[i - 1], &p[i]);
	
	for(int len = 2; len <= n; len++)
	{
		for(int i = 1; i + len - 1 <= n; i++)
		{
			int j = i + len - 1;
			
			f[i][j] = INF;
			
			for(int k = i; k < j; k++)
			{
				f[i][j] = min(f[i][j], f[i][k] + f[k + 1][j] + p[i - 1] * p[k] * p[j]);
			}
		}
	}
	
	
	printf("%d\n", f[1][n]);
	
	return 0;
}


