#include<stdio.h>
int main(void){
	int st[31];
	for(int i=1; i<=28; i++){
		int x;
		scanf("%d",&x);
		st[x]=1;
	}
	for(int i=1; i<=30; i++){
		if(st[i]!=1){
			printf("%d\n",i);
		}
	}
	return 0;
}