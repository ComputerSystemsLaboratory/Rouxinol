#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	if (a == b , b==c){
		printf("No\n");
	}

	else if (a < b){
		if (b < c){
			printf("Yes\n");
		}
		else { printf("No\n"); }
	}
	else 	 {
		printf("No\n");
	}
	
	return 0;
}