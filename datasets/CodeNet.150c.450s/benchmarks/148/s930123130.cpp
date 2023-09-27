#include <stdio.h>
 
int main () {
	int n;
	scanf("%d", &n);
	int AC = 0, WA = 0, TLE = 0, RE = 0;
	for (int i = 0; i < n; i++) {
		char s[6];
		scanf("%s", &s);
		if (s[0] == 'A') {
			AC++;
		}
		else if (s[0] == 'W') {
			WA++;
		}
		else if (s[0] == 'T') {
			TLE++;
		}
		else if (s[0] == 'R') {
			RE++;
		}
	}
	printf("AC x %d\n", AC);
	printf("WA x %d\n", WA);
	printf("TLE x %d\n", TLE);
	printf("RE x %d\n", RE);
	
	return 0;
}