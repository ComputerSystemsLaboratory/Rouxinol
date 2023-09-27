#include <stdio.h>
#include <string.h>

int main(){
	int lenght;
	char word[255];
	int chr[5] = {0};
	scanf("%d", &lenght);
	
	for(int i=0; i < lenght; i++){
		scanf("%s", &word);
		
		if(strcmp(word, "AC") == 0){
			++chr[0];
		}else if (strcmp(word, "WA")==0){
			++chr[1];
		}else if (strcmp(word, "TLE")==0){
			++chr[2];
		}else if (strcmp(word, "RE")==0){
			++chr[3];
		}
	}
	
	printf("AC x %d\n", chr[0]);
	printf("WA x %d\n", chr[1]);
	printf("TLE x %d\n", chr[2]);
	printf("RE x %d\n", chr[3]);
	
	return 0;
}