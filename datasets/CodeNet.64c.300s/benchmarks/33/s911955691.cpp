#include<stdio.h>
int main() {
	int a[100], b[100],i=0;
	char c[100];
	do {
		scanf("%d", &a[i]);
(void)getchar();
		scanf("%c", &c[i]);
		scanf("%d", &b[i]);
		
			i++;
	} while (c[i - 1] != '?');
	for (int z = 0; z < i; z++) {
		if (c[z] == '+') printf("%d\n", a[z] + b[z]);
		else if (c[z] == '-') printf("%d\n", a[z] - b[z]);
		else if (c[z] == '*') printf("%d\n", a[z] * b[z]);
		else if (c[z] == '/') printf("%d\n", a[z] / b[z]);
	}
}