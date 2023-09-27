#include<stdio.h>
int main() {
	int a,b,d[52],e=0;
	char c;
	scanf("%d",&b);
	for (int i = 0; i < 52; i++) {
		d[i] = 0;
	}
	for (int i = 0; i < b; i++) {
		scanf("%c", &c);
		scanf("%c", &c);
		void putchar();
		scanf("%d", &a);
		void putchar();
		if (c=='S')e = 0;
		else if (c=='H')e = 13;
		else if (c=='C')e = 26;
		else if (c=='D')e = 39;
		
	d[e+a-1] = 1;
	
	}
	for (int i = 0; i < 52; i++) {
		if (d[i] == 0) {
			if(i/13==0)printf("S %d\n", i % 13+1);
			if (i / 13 == 1)printf("H %d\n", i % 13+1);
			if (i / 13 == 2)printf("C %d\n", i % 13+1);
			if (i / 13 == 3)printf("D %d\n", i % 13+1);
		}
	}
}