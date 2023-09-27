#include<stdio.h>
int main()
{
	int a,m[100];
	scanf("%d",&a);
	for(int i=0;i<a;i++){
		scanf("%d",&m[i]);
	}
	for(int i=a-1;i>-1;i--){
		printf("%d",m[i]);
		if(i!=0)printf(" ");
	}
	printf("\n");
	return 0;
}