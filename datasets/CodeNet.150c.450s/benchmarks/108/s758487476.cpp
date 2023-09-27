#include<iostream>
#include<cstdio>
#include<queue>
#define Lens 105
using namespace std;
int N;
int A[Lens][Lens];
int d[Lens];
char c[Lens];
queue<int> Q;

int main()
{
	cin >> N;
	Q.push(1);
	
	for (int i = 1; i <= N; i++)
	{
		int k, n;
		cin >> k >> n;
		c[k] = 'w';
		for (int i = 0; i < n; i++)
		{
			int j;
			cin >> j;
			A[k][j] = 1;
		}
	}
	c[1] = 'g';
	while (Q.size())
	{
		int i = Q.front();
		Q.pop();
		for(int j=1;j<=N;j++)
		{
			if (A[i][j] == 1 && c[j] == 'w')
			{
				c[j] = 'g';
				d[j] = d[i] + 1;
				Q.push(j);
			}	 
		}
	}
	for (int i = 2; i <= N; i++)
	{
		if (c[i] == 'w')
			d[i] = -1;
	}	
	for (int i = 1; i <= N; i++)
	{
		cout << i << ' ' << d[i] << endl;
	}
	return 0;
}
