#include <stdio.h>
#include <cctype>

int main(void){

	char str[1201];
	int i=0;
	int n=0;
	
	while(1){
		scanf("%c",&str[i]);
		n++;
		if(str[i]=='\n'){
			break;
		}
		if(islower(str[i])){
			str[i]=toupper(str[i]);
		}else if(isupper(str[i])){
			str[i]=tolower(str[i]);
		}
		i++;
	}
	
	for(i=0;i<n;i++){
		printf("%c",str[i]);
	}	
	
	return 0;
}