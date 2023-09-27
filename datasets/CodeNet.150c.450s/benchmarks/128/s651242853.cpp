#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//østrðtÉµÄstrÉãü·éÖ
void reverseString(char *str){
	char *hoge;
	int length;

	hoge = (char *)malloc( sizeof(char) * strlen(str) );
	
	length = strlen(str);
	for(int i=0 ; i<length ; i++){
		hoge[length-i-1] = str[i];
	}
	for(int i=0 ; i<length ; i++){
		str[i] = hoge[i];
	}
	free(hoge);
} 
 
int main(){
	char str[80];

	while (scanf("%s", str) != EOF) {
		reverseString(str);
		printf("%s\n", str);
	}

	return 0;
} 