#include <iostream>
#include <cstdio>
#include <stdlib.h> 
int A[100];
int n;

int solve(int i, int m)
{
	if(m == 0) {return 1;}
	if(i >= n) { return 0;}
	
	return solve(i + 1, m) || solve(i+1, m-A[i]);
}

int main()
{
	scanf("%d", &n);
	
	for(int i=0; i < n; i++)
	{
		scanf("%d", &A[i]);
	}
	
	int q, m;
	
	scanf("%d", &q);
		
	for(int i=0; i < q; i++)
	{
		scanf("%d", &m);
		if(solve(0, m) == 1)
		{
			printf("yes\n");
		}
		else if(solve(0, m) == 0)
		{
			printf("no\n");
		}
	}
//	system("pause");
	return 0;
}
