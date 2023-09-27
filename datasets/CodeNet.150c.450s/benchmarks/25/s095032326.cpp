#include <stdio.h>

int main(){
	char moji,bun[1200];

	int abc[123]={0},i=0;

	while((moji=getchar())!=EOF){
		if(65<=(int)moji && (int)moji<=90){
			abc[(int)moji+32]++;
		}
		if(97<=(int)moji && (int)moji<=122){
			abc[(int)moji]++;
		}
	}

	for(i=97;i<=122;i++){
		printf("%c : %d\n",(char)i,abc[i]);
	}
}