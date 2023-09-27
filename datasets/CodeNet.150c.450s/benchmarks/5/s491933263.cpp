#include<stdio.h>
int main(void)
{
	int a[101],s,i,d;
	scanf("%d",&s);
	for(i=1;i<=s;i++){
		scanf("%d",&a[i]);
	}
	d=1;
	for(i=s;i>=1;i--){
		d++;
		printf("%d",a[i]);
		if(d<=s){
			printf(" ");
		}
	}
	printf("\n");
	return 0;
}