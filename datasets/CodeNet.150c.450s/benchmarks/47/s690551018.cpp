
#include<stdio.h>
int main()
{
	int a=0,b=0,c=0,d,e;
	while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&e)!=EOF)
	{
	    if((c+e)>b||(c-e)<0||(d+e)>b||(d-e)<0)
			  printf("No\n"); 
        else 
        	 printf("Yes\n");
	}
	return 0; 
}