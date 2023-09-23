#include<stdio.h>
int main(void)
{
	int n,i,j,k,d,c;
	while(scanf("%d",&n)!=EOF){
		c=0;
		for(i=0;i<10;i++){
			for(j=0;j<10;j++){
				for(k=0;k<10;k++){
					for(d=0;d<10;d++){
						if(i+j+k+d==n){
							c++;
						}
					}
				}
			}
		}
		printf("%d\n",c);	
	}
	return 0;
}