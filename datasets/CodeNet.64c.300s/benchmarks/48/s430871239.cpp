#include<stdio.h>
int flg[1000000];
int main(void)
{
	int n,i,j,c;
	while(scanf("%d",&n)!=EOF){
	c=0;
		for(i=2;i<n;i++){
			flg[i]=0;
		}	
			for(i=2;i*i<=n;i++){
				for(j=2;i*j<=n;j++){
						flg[i*j]=1;	
				}
			}
		for(i=2;i<=n;i++){
			if(flg[i]==0){
					c++;
			}		
		}
	printf("%d\n",c);
	}
	return 0;
}	