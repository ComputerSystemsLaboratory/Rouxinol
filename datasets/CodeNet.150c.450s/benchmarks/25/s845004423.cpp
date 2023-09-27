#include<stdio.h>
#include<ctype.h>

int main(){
	int num,i;
	int counter[26]={0};
	char ch;
	int k = 26;
	
	while(scanf("%c",&ch) != EOF){
		num = -1;
		if(islower(ch)){
		num = ch -'a';
		}else if(isupper(ch)){
			num = ch -'A';
		}
		if(0<=num && num<=25){
			counter[num]++;
		}
	}
	for(i=0;i<k;i++){
		printf("%c : %d\n",'a'+i,counter[i]);
	}
}