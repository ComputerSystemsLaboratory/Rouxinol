#include <stdio.h>
int main(){
	//N test cases
	//each case, theres a string for the verdict of it
	//find the values of AC, WA, TLE, and RE
	//1<N<1e5
	int n;
	scanf("%d", &n);
	
	int AC = 0;
	int WA = 0;
	int TLE = 0;
	int RE = 0;
	
	for(int i=0; i<n; i++){
		char str[5];
		
		scanf("%s", &str);
		switch (str[0]){	//biar dia bacanya chara pertama aja
			case 'A':	//switch cmn bisa 1 chara ya casenya
				AC++;
				break;
			case 'W':
				WA++;
				break;
			case 'T':
				TLE++;
				break;
			case 'R':
				RE++;
				break;
		}
}
	printf("AC x %d\n", AC);
	printf("WA x %d\n", WA);
	printf("TLE x %d\n", TLE);
	printf("RE x %d\n", RE);
	
	
	return 0;
}