#include<stdio.h>
int main(void)
{
	int i,flg,j;
	int zen[30];
	int a[28],cnt[30]; 
	for(i=1;i<=28;i++){
		scanf("%d",&a[i]);
	}
	for(i=1;i<=30;i++){
		zen[i]=i;
		cnt[i]=0;
	}
	for(i=1;i<=28;i++){
		flg=0;
		for(j=1;j<=30;j++){
			if(a[i]==zen[j]){
				flg=1;
				cnt[j]=flg;
				break;
			}
		}
	}
	for(i=1;i<=30;i++){
		if(cnt[i]==0){
			printf("%d\n",i);
		}
	}
	return 0;
}