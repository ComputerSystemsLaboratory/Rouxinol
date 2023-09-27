#include<stdio.h>
int main(void)
{
	int i,j,a[29],s,k,w,flg;
	s=0; k=0;
	for(i=1;i<=28;i++){
		scanf("%d",&a[i]);
	}
	for(j=1;j<=30;j++){
		flg=1;
		for(i=1;i<=28;i++){
			if(j==a[i]){
				flg=0;
			}
		}
		if(flg==1){
			if(s==0){
				s=j;
			}
			else{
				k=j;
			}
		}
	}
	printf("%d\n",s);
	printf("%d\n",k);
	return 0;
}
	
