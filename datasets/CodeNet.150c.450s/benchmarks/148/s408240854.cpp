#include <stdio.h>

int main() {
	int n, AC = 0, WA = 0, TLE = 0, RE = 0;
	char Si[110];
	
	scanf("%d", &n);
	while(n--){
		scanf("%s", Si);
		if(Si[0] == 'A'){
			AC++;
		}else if(Si[0] == 'W'){
			WA++;
		}else if(Si[0] == 'T'){
			TLE++;
		}else if(Si[0] == 'R'){
			RE++;
	}
}
	printf("AC x %d\n", AC);
	printf("WA x %d\n", WA);
	printf("TLE x %d\n", TLE);
	printf("RE x %d\n", RE);
	
	return 0;

}