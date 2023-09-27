#include <stdio.h>


int main() {
	int m, f, r, count = 0;
	char b[100] = {};
	for (;;) 
	{
		scanf("%d%d%d", &m, &f, &r);
		if (m == -1 && f == -1 && r == -1)break;
		if(m==-1||f==-1)
		{
			b[count] = 'F';
		}
		else if (m + f > 79) {
			b[count] = 'A';
		}
		else if (m + f > 64) {
			b[count] = 'B';
		}
		else if (m + f > 49) {
			b[count] = 'C';
		}
		else if (m + f > 29) {
			if (r > 49) {
				b[count] = 'C';
			}
			else {
				b[count] = 'D';
			}
		}
		else {
			b[count] = 'F';
		}
		count++;
	}
	
	for (int i = 0; i < count; i++) {
		printf("%c\n", b[i]);
	}

	return 0;
}