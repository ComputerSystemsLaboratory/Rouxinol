#include<stdio.h>
int main(void)
{
	int a[31]={0};
	int i=0,j=0;
	int num=0;
	int b[2]={0};

	a[0]=0;
	for (i=0;i<=27;i++)
	{
		scanf("%d",&num);
		a[num]=1;
	}
	j=0;
	for (i=1;i<=30;i++)
	{
		if (a[i]==0)
		{
			b[j]=i;
			j++;
		}
	}
	if (b[0]>b[1])
	{
		j=a[0];
		a[0]=a[1];
		a[1]=j;
	}
	for (i=0;i<=1;i++)
	{
		printf("%d\n",b[i]);
	}
	return 0;
}