#include<stdio.h>

int main(){
	int s[31],i;
	
	for(i=0;i<28;i++){
		scanf("%d",&s[0]);
		s[s[0]]=1;
	}
	for(i=1;i<31;i++){
		if(s[i]!=1)printf("%d\n",i);
	}
	return 0;
}