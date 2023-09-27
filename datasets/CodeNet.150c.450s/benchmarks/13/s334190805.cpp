#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define N 200
int main() {
	char s[N] = "", x[N]="", ss[N] = "", *p1, *p2;
	int i= 0,j,k,flg = 0,xLength;
	char n[2][5] = { {"No"},{"Yes"} };
	fgets(s,sizeof(s),stdin);
	fgets(x,sizeof(x),stdin);
	
	s[strlen(s) - 1] = '\0';
	x[strlen(x) - 1] = '\0';
	strcat(ss, s);
	strcat(s, ss);
	p1 = s;
	p2 = x;
	xLength = strlen(x);

	while (*p1) {
		j = 0;
		if (*p1 == *p2) {
			//printf("*%c\n", *p1);
			for (k = 1; k <= xLength; k++) if (*(p2+k) != *(p1+k)) { 
				//printf("*%d %c %c\n",i, *(p2 + k), *(p1+ k)); 
				break; }
		}
		if (k == xLength) { flg = 1;  break; }
		*(p1++);
		i++;
	}
	/*while (i<=strlen(s)-strlen(x)) {
		j = 0;
		if (s[i] == x[j]) {
			for (k = 1; k <= strlen(x); k++)
				if (x[j + k] != s[i + k]) break;
		}
		if (k == strlen(x)) {
			flg = 1;
			break;
		}
		j++;
		i++;
	}
	*/
	printf("%s\n", n[flg]);
	return 0;
}