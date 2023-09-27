#include<stdio.h>
int main(){
	int AC=0;
	int WA=0;
	int TLE=0;
	int RE=0;
	int batas;
	scanf("%d", &batas);
	for(int i=0;i<batas;i++){
		char string[6]="";
		scanf("%s", &string);
		if(string[0]=='A') AC++;
		else if(string[0]=='W') WA++;
		else if(string[0]=='T') TLE++;
		else if(string[0]=='R') RE++;	
	}
	printf("AC x %d\n", AC);
	printf("WA x %d\n", WA);
	printf("TLE x %d\n", TLE);
	printf("RE x %d\n", RE);
	return 0;
}