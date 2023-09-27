#include <stdio.h>


int main(void){

	char str[200];
	int i,j,k,l;
	int y=1;
	int ans=0;
	
	for(i=0;i<101;i++){
		scanf("%c",&str[i]);
		if(str[i]=='\n'){
			break;
		}
	}
	
	for(k=0;k<i;k++){
		str[i+k]=str[k];
	}
	
	char p[i];
	
	for(j=0;j<i;j++){
		scanf("%c",&p[j]);
		if(p[j]=='\n'){
			break;
		}
	}
	
	for(k=0;k<i;k++){
		for(l=0;l<j;l++){
			if(str[k+l]!=p[l]){
				y=0;
			}
		}
		ans=ans+y;
		y=1;
	}
	
	if(ans>0){
		printf("Yes\n");
	}else{
		printf("No\n");
	}
	
	return 0;
}