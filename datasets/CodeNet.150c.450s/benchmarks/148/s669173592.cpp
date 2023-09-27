#include <stdio.h>

int main(){
	int N;
	int AC = 0, WA = 0, TLE = 0, RE = 0;
	char S[5];
	scanf("%d", &N);
	for (int i = 0; i < N; i++){
		scanf("%s", &S);
		if (S[0] == 'A'){
			AC++;
		}else if(S[0] == 'W'){
			WA++;
		}else if(S[0] == 'T'){
			TLE++;
		}else if(S[0] == 'R'){
			RE++;
		}
	}
	printf("AC x %d\n", AC);
	printf("WA x %d\n", WA);
	printf("TLE x %d\n", TLE);
	printf("RE x %d\n", RE);
	return 0;
}