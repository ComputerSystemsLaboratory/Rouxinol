#include<iostream>
#include<cstdio>
#define Lens 105
using namespace std;
int N;
int A[Lens][Lens];
int S[Lens], E[Lens];
int sum = 0;
char c[Lens];

void dns(int i)
{
	sum++;
	S[i] = sum;
	c[i] = 'g';
	for (int j = 1; j <= N; j++)
	{
		if (A[i][j] == 1 && c[j] == 'w')
			dns(j);
	}
	sum++;
	E[i] = sum;
	c[i] = 'b';
}

int main()
{
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		int k, n;
		cin >> k >> n;
		c[i] = 'w';
		for (int i = 0; i < n; i++)
		{
			int j;
			cin >> j;
			A[k][j] = 1;
		}
	}
	/*
	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N; j++)
		{
			if (j > 1)
				cout << ' ';
			cout << A[i][j];
		}
		cout << endl;
	}
	*/
	for (int i = 1; i <= N; i++)
	{
		if (c[i] == 'w')
			dns(i);
	}
	for (int i = 1; i <= N; i++)
	{
		cout << i << ' ' << S[i] << ' ' << E[i] << endl;
	}
	return 0;
}
