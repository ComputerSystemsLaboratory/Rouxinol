#include<stdio.h>
int main()
{
	int a,b,i;
	for(i=1;;i++)
	{
		scanf("%d %d",&a,&b);
		if (a==0&&b==0) break;
		if(a>b)  printf("%d %d\n",b,a);	
        else printf("%d %d\n",a,b);	
	}
	return 0;
}