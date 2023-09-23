#include<stdio.h>
int main(void)
{
	int n;
	int cnt[101];
	int i,j;
	int max;
	
	for(i=1;i<=100;i++){
		cnt[i]=0;
	}
	while(scanf("%d",&n)!=EOF){
		cnt[n]++;
	}
	max=0;
	for(i=1;i<=100;i++){
		if(cnt[i]>max){
			max=cnt[i];
			j=i;
		}
	}
	printf("%d\n",j);
	for(i=j+1;i<=100;i++){
		if(cnt[i]==max){
			printf("%d\n",i);
		}
	}
	return 0;
}