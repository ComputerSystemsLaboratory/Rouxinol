#include <stdio.h>
#include <string.h>
int main(){
	int n, o;
	char string[255];
	int character[6]={0};
	scanf("%d", &n);
	for(int i = 0; i<n; i++){
		scanf("%s", &string);
		if(o=strcmp (string, "AC")==0){
			++character[1];
		}
		if(o=strcmp (string, "WA")==0){
			++character[2];
		}
		if(o=strcmp (string, "TLE")==0){
			++character[3];
		}	
		if(o=strcmp (string, "RE")==0){
			++character[4];
		}
	}
	printf("AC x %d\n", character[1]);
	printf("WA x %d\n", character[2]);
	printf("TLE x %d\n", character[3]);
	printf("RE x %d\n", character[4]);
	return 0;
}
