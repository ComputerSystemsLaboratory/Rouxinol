#include <stdio.h>
int main(void)
{
	int x,y;
	scanf("%d %d",&x,&y);
	
	if(x==y){printf("a == b\n");}
	if(x>y){printf("a > b\n");}
	if(x<y){printf("a < b\n");}
	
	return 0;
}