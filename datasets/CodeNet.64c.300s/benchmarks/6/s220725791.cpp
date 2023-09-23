#include <stdio.h>
void aaa(int, int, int, int);
int a0[10][3]={{0}} ,a1[10][3]={{0}}, a2[10][3]={{0}}, a3[10][3]={{0}};

void aaa(int b, int f, int r, int v)
{
	if (b==1)
	{
		a0[r-1][f-1]=a0[r-1][f-1]+v;
		
	}
	else if (b==2)
	{
		a1[r-1][f-1]=a1[r-1][f-1]+v;
	}
	else if (b==3)
	{
		a2[r-1][f-1]=a2[r-1][f-1]+v;
	}
	else if (b==4)
	{
		a3[r-1][f-1]=a3[r-1][f-1]+v;
	}
	return ;
}

int main(void)
{
	int i, y, n, b, f, r, v;

	scanf("%d", &n);
	for (i=0;i<n;i++)
	{
		scanf("%d%d%d%d", &b, &f, &r, &v);
		aaa(b, f, r, v);
	}

	for (i=0;i<3;i++)
	{
		for (y=0;y<10;y++)
		{
			printf(" %d", a0[y][i]);
		}
		printf("\n");
	}
	printf("####################\n");
	for (i=0;i<3;i++)
	{
		for (y=0;y<10;y++)
		{
			printf(" %d", a1[y][i]);
		}
		printf("\n");
	}
	printf("####################\n");
	for (i=0;i<3;i++)
	{
		for (y=0;y<10;y++)
		{
			printf(" %d", a2[y][i]);
		}
		printf("\n");
	}
	printf("####################\n");
	for (i=0;i<3;i++)
	{
		for (y=0;y<10;y++)
		{
			printf(" %d", a3[y][i]);
		}
		printf("\n");
	}

	return 0;
}