#include <stdio.h>
#include <string.h>

int main() {
	int n, AC = 0, WA = 0, TLE = 0, RE = 0;
	char wha[5];
	scanf ("%d", &n);
	
	for (int i = 1; i <= n; i++) {
		scanf ("%s", &wha);
		if (strcmp(wha, "AC") == 0) {
			AC += 1;
			continue;
		}
		else if (strcmp(wha, "WA") == 0) {
			WA += 1;
			continue;
		}
		else if (strcmp(wha, "TLE") == 0) {
			TLE += 1;
			continue;
		}
		else if (strcmp(wha, "RE") == 0) {
			RE += 1;
			continue;
		}
	}
	printf ("AC x %d\n", AC);
	printf ("WA x %d\n", WA);
	printf ("TLE x %d\n", TLE);
	printf ("RE x %d\n", RE);
	
	return 0;
}