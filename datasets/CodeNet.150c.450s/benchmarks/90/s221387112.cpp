#include <stdio.h>
int main()
{
	int a[101]={0},b,max=0;
	while(scanf("%d",&b)!=EOF)
		a[b]++;
	for(int i=1;i<=100;i++){
		if(max<a[i])
			max=a[i];
	}
	for(int i=1;i<=100;i++){
		if(max==a[i])
			printf("%d\n",i);
	}
	return 0;
}