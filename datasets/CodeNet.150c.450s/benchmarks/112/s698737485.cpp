#include <map>
#include <string>
#include <stdio.h>
#include <iostream>

using namespace std;

int n, m;
int i, j;
char a, b, c;
char list[1000];

int main()
{
	while (1)
	{
		scanf("%d", &n);
		if (n==0) return 0;
		for (i=0; i<1000; i++) list[i] = i;
		for (i=0; i<n; i++)
		{
			scanf(" %c %c", &a, &b);
			list[a] = b;
		}
		scanf("%d", &m);
		for (i=0; i<m; i++)
		{
			scanf(" %c", &c);
			printf("%c", list[c]);
		}
		printf("\n");
	}
}