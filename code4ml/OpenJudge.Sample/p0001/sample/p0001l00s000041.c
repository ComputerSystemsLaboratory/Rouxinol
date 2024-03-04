#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
	int a,b,i,sum,count;
	while((scanf("%d %d", &a,&b))!=EOF)	{
		for(i=1; i<=11; i++)	{
				sum=a+b;
				if(sum<(pow(10,i)))	{
				break;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}
