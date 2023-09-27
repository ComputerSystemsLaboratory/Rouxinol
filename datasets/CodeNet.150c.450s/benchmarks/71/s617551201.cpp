#include<stdio.h>

int saiki(int n){
	int a,b,c,d;
	for(int i=0;i<10;i++){
		
	}
}

int main(void){
	int n,cnt;
	while(scanf("%d",&n)!=-1){
		cnt=0;
		for(int i=0;i<10;i++){
			for(int j=0;j<10;j++){
				for(int k=0;k<10;k++){
					for(int l=0;l<10;l++){
						if(i+j+k+l==n)cnt++;
					}
				}
			}
		}
		printf("%d\n",cnt);
	}
	return 0;
}