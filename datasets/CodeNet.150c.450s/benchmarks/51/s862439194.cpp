#include<stdio.h>
int main(void)
{
	int flg[30+1];
	int data[30+1],bangou[30+1];
	int i,j;
	for(i=1;i<=30;i++){
		bangou[i]=i;
		flg[i]=0;
	}
	for(i=1;i<=30;i++){
		scanf("%d",&data[i]);
	}
	for(i=1;i<=30;i++){
		for(j=1;j<=30;j++){
			if(bangou[i]==data[j]){
				flg[i]=1;
			}
		}
	}
	for(i=1;i<=30;i++){
		if(flg[i]==0){
			printf("%d\n",i);
		}
	}
	return 0;
}