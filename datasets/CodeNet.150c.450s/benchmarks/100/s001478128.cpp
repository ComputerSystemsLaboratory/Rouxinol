#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	long long int b=1;
	for(int i=0;i<a;)b*=++i;
	printf("%lld\n",b);
}
