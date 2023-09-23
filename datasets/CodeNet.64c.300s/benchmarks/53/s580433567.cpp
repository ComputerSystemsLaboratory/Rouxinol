#include <stdio.h>
int main()
{
	int a,b,c,count=0;
	scanf("%d %d %d",&a,&b,&c);
	for(a;a<=b;a++){
		if(c%a==0)
			count++;
	}
	printf("%d\n",count);
}