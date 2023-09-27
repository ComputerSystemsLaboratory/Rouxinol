#include<stdio.h>
#include<string.h>

char al[]="abcdefghijklmnopqrstuvwxyz";

int al_num(char a){
	int i;
	for(i=0;i<26;i++){
		if(al[i]==a){
			return i+1;
		}
	}
	return 0;
}

int min(int a,int b){
	if(a>b){
		return b;
	}
	return a;
}

int main(){
	int i,j,num,taroumaru=0,hanako=0;
	char input[256],word_1[128],word_2[128],*p;
	
	
	fgets(input,sizeof input,stdin);
	sscanf(input,"%d",&num);
	
	
	
	for(i=0;i<num;i++){
		fgets(input,sizeof input,stdin);
		p=strtok(input," ");
		sprintf(word_1,"%s",p);
		p=strtok(NULL," ");
		sprintf(word_2,"%s",p);
		
		
		//word_1[strlen(word_1)-1]='\0';
		word_2[strlen(word_2)-1]='\0';
		
		
		for(j=0;j<min(strlen(word_1),strlen(word_2));j++){
			if(al_num(word_1[j])>al_num(word_2[j])){
				taroumaru+=3;
				break;
			}else if(al_num(word_1[j])<al_num(word_2[j])){
				hanako+=3;
				break;
			}
			
			if(j==min(strlen(word_1),strlen(word_2))-1){
				if(strcmp(word_1,word_2)==0){
					taroumaru++;
					hanako++;
				}else{
					if(strlen(word_1)>strlen(word_2)){
						taroumaru+=3;
					}else{
						hanako+=3;
					}
				}
			}
			
		}
		
	}
	printf("%d %d\n",taroumaru,hanako);
	
	return 0;
}