#include <stdio.h>
#include <string.h>

int main(){
	int n;
	scanf("%d", &n);
	int AC = 0, TLE = 0, RE = 0, WA = 0;
	
	char con[10];
	for (int i = 0; i < n; i++){
		scanf("%s", con);
		if (strcmp(con, "WA") == 0) WA++;
		if (strcmp(con, "TLE") == 0) TLE++;
		if (strcmp(con, "RE") == 0) RE++;
		if (strcmp(con, "AC") == 0) AC++;
	}
	printf("AC x %d\n", AC);
	printf("WA x %d\n", WA);
	printf("TLE x %d\n", TLE);
	printf("RE x %d\n", RE);
	return 0;
}