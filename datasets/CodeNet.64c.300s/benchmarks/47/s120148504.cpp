#include<stdio.h>
int main(void)
{
	int i,a,cnt[101],max=-1;
	for(i=1;i<=100;i++){
		cnt[i]=0;
	}
	while(scanf("%d",&a)!=EOF){
		cnt[a]++;
	}
	for(i=1;i<=100;i++){
		if(max<cnt[i]){
			max=cnt[i];
		}
	}
	for(i=1;i<=100;i++){
		if(cnt[i]==max){
			printf("%d\n",i);
		}
	}
	return 0;
}