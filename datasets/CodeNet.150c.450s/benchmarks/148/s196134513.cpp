#include <stdio.h>
#include <string.h>

int main() {
	int N;
	char S[100];
	int AC = 0, WA = 0, TLE = 0, RE = 0;
	scanf("%d", &N);
	
	for (int i = 0; i < N; i++) {
		scanf("%s", &S);
		
		if(strcmp("AC", S) == 0) {
			AC += 1;
		} else if(strcmp("WA", S) == 0) {
			WA += 1;
		} else if(strcmp("TLE", S) == 0) {
			TLE += 1;
		} else if(strcmp("RE", S) == 0) {
			RE += 1;
		}
	} 
	printf("AC x %d\n", AC);
	printf("WA x %d\n", WA);
	printf("TLE x %d\n", TLE);
	printf("RE x %d\n", RE);
	
	return 0;
}