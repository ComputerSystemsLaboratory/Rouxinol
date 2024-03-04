#include<stdio.h>

int main(){
	int i,tmp,j;
	int ht[10];
	for(i=0;i<=9;i++){
		scanf("%d",&ht[i]);
	}
	for(j=1;j<10;j++){
		for(i=9;i>=j;i--){
			if(ht[i-1]<=ht[i]){
				tmp=ht[i-1];
				ht[i-1]=ht[i];
				ht[i]=tmp;
			}
		}
	}
	for(i=0;i<3;i++){
		printf("%d\n",ht[i]);
	}
	return 0;
}