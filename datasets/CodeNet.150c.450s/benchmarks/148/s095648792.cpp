#include <stdio.h>

int main() {
	long int Zx = 0, Xy = 0, Yz = 0, xyz = 0, count;
	scanf("%ld", &count);
	for (int u = 0; u < count; u++) {
		char kata[5];
		scanf("%s", &kata);
		switch (kata[0]) {
			case 'A':
				Zx++;
				break;
			case 'W':
				Xy++;
				break;
			case 'T':
				Yz++;
				break;
			case 'R':
				xyz++;
				break;		
		}	
	}
	printf("AC x %d\nWA x %d\nTLE x %d\nRE x %d\n", Zx, Xy, Yz, xyz);
	return 0;
}