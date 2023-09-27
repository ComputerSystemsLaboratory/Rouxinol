#include<cstdio>
int main() {
	int a,b,c;
	if (~scanf("%d",&a))
		if (~scanf("%d",&b) && b>a)
			if (~scanf("%d",&c) && c>b)
				printf("Yes\n");
			else
				printf("No\n");
		else
			printf("No\n");
	else
		printf("No\n");
	return 0;}