#include<stdio.h>

int main(){
	
	int a,b,c;

	scanf("%d %d %d\n",&a,&b,&c);

	if(a<b & b<c)
		printf("%d %d %d\n",a,b,c);
	if(a>b & b>c)
		printf("%d %d %d\n",c,b,a);
	if(a<b & b>c & a<c)
		printf("%d %d %d\n",a,c,b);
	if(a<b & b>c & a>c)
		printf("%d %d %d\n",c,a,b);
	if(a>b & b<c & a<c)
		printf("%d %d %d\n",b,a,c);
	if(a>b & b<c & a>c)
		printf("%d %d %d\n",b,c,a);
	if(a<b & b==c)
		printf("%d %d %d\n",a,b,c);
	if(a>b & b==c)
		printf("%d %d %d\n",b,c,a);
	if(a==b & b<c)
		printf("%d %d %d\n",a,b,c);
	if(a==b & b>c)
		printf("%d %d %d\n",c,a,b);
	if(a==c & b<c)
		printf("%d %d %d\n",b,a,c);
	if(a==c & b>c)
		printf("%d %d %d\n",a,c,b);
	return 0;
}