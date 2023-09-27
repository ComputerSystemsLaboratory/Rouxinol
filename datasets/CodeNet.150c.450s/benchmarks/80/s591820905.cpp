#include <stdio.h>
int main()
{
	int i,a[4],b[4],a_total=0,b_total=0,put;
	for(i=0;i<4;i++)
	{
		scanf("%d",&a[i]);
		a_total+=a[i];
	}
	for(i=0;i<4;i++)
	{
		scanf("%d",&b[i]);
		b_total+=b[i];
	}
	put=a_total<b_total?b_total:a_total;
	printf("%d\n",put);
	//Sleep(1000);
}