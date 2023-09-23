#include<stdio.h>
int flg[1000000];
int main(void)
{

	int a,i,j,cnt;
	while(scanf("%d",&a)!=EOF){	
		for(i=2;i<=a;i++){
		flg[i]=1;
		}
		for(i=2;i*i<=a;i++){
			if(flg[i]==1){
				j=2;
				while(i*j<=a){
				flg[i*j]=0;
//				printf("i=%d j=%d a=%d\n",i,j,a);
				j++;
				}
			}
		}
//		for(i=2;i<=10;i++)	printf("flg=%d\n",flg[i]);
		cnt=0;
		for(i=2;i<=a;i++){
//		printf("i=%d\n",i);
			if(flg[i]==1){
//			printf("i=%d\n",i);			
			cnt++;
			}
		}
		printf("%d\n",cnt);
	}	
	return 0;
}