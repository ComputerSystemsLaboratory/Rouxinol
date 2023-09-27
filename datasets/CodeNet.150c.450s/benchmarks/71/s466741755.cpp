#include<stdio.h>
int n;
int i,j,h,w;
int main(void){
	while(scanf("%d",&n)!=EOF){
		int cnt=0;
		for(i=0;i<=9;i++){
			for(j=0;j<=9;j++){
				for(h=0;h<=9;h++){
					for(w=0;w<=9;w++){
						if(n==i+j+h+w){
							cnt++;
						}
					}
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}