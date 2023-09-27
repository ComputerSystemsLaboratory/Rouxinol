#include<iostream>
#include<stdio.h>
const int nn = 10;
int a[nn];
using namespace std;
bool dfs()
{
	int left = -1;
	int right = -1;
	
	int T = 0;
	while (T<nn)
	{
		if (right < a[T])
		{
			right = a[T++];
			continue;
		}
		if (left < a[T])
		{
			left = a[T++];
			continue;
		}
		return false;
	}
	return true;
}
int main()
{
	//freopen("in.txt", "r", stdin);
	int N;
	scanf("%d", &N);
	while (N--)
	{
		for (int i = 0; i < nn; i++)
			scanf("%d", &a[i]);
		if (dfs())
			printf("YES\n");
		else
			printf("NO\n");
	}

	return 0;
}