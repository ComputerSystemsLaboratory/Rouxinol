#include<cstdio>
#include<iostream>
#include<algorithm>
#define Inf 1<<21
#define Lens 105

using namespace std;
int N;
int w[Lens][Lens], p[Lens], d[Lens];
char c[Lens];

int prime()
{
	d[0] = 0;
	int num = 0;
	while (true)
	{
		int minv = Inf;
		int u = -1;
		for (int i = 0; i < N; i++)
		{
			if (minv > d[i] && c[i] == 'w')
			{
				minv = d[i];
				u = i;
			}
		}
		if (u == -1) break;
		c[u] = 'b';
		for (int i = 0; i < N; i++)
		{
			if (c[i] == 'w'&&w[u][i] != -1)
				if (d[i] > w[u][i])
				{
					d[i] = w[u][i];
					p[i] = u;
				}
		}
	}
	int sum = 0;
	for (int i = 1; i < N; i++)
	{
		sum = sum + w[i][p[i]];
	}
	return sum;
}

int main()
{
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		c[i] = 'w';
		d[i] = Inf;
		p[i] = -1;
		for (int j = 0; j < N; j++)
		{
			int k;
			cin >> k;
			w[i][j] = (k == -1) ? Inf : k;
		}
	}
	cout << prime() << endl;
	return 0;
}

