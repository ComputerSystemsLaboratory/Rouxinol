#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
	char c[1200];
	fgets(c,1200,stdin);
	for (int i = 0;i<1200;i++){
			if (c[i] == '\n') break;
			if (islower(c[i])) c[i] = toupper(c[i]);
			else if (isupper(c[i])) c[i] = tolower(c[i]);
			printf("%c",c[i]);
		
			
	}
	printf("\n");
	/*
	char c;
		while(1){
		scanf("%c",&c);
			if (c == '\n') break;
			if (islower(c)) c = toupper(c);
			else if (isupper(c)) c = tolower(c);
			printf("%c",c);s
		
			
	}
	printf("\n");*/
	return 0;
}