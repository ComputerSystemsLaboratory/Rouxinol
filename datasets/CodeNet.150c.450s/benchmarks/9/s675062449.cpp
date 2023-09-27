#include<stdio.h>
#include<string.h>

int main(){
	int i,j,h,num,len;
	char word[402],tmp1[201],tmp[201];
	
	while(1){
		scanf("%s",word);
		if(strcmp(word,"-") == 0)  break;
		len = strlen(word);
		scanf("%d",&num);
		for(i=0;i<num;i++){
			scanf("%d",&h);
			for(j=0;j<h;j++) word[len+j] = word[j];
			for(j=0;j<len;j++) word[j] = word[j+h];
			word[len] = '\0';
		}
		printf("%s\n",word);
	}
	return 0;
}