#include<stdio.h>
int main()
{
	int t=0, s=0,b, a=0,i,j;
	for (j = 0; j < 4; j++) {
		scanf("%d", &a);
		s = a + s;
	}
	for (i = 0; i < 4; i++) {
		scanf("%d", &b);
		t = b + t;
	}
	if (s> t) {
		printf("%d\n",s);
	}
	else {
		printf("%d\n", t);
	}
}