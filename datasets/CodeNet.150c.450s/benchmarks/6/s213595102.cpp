#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	scanf("%d%d%d",&a,&b,&c);
	if(a < b) {
		if(b < c) {
			printf("Yes\n");
		}else{
			printf("No\n");
		}
	}else{
		printf("No\n");
	}
	return 0;
}