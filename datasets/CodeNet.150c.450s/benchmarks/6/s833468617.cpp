#include <stdio.h>

int main(void)
{
  int a,b,c;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	if(a<b &&b<c){
		printf("Yes\n");
	}
	else{
		printf("No\n");
	}
	return 0;
}
