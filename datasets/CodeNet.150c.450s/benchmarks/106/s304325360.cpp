#include <stdio.h>

int a, b, c, i;
int d[64], t, l;
int main() {
t = 0;

scanf("%d %d %d", &a, &b, &c);

for(i=1; i<10001; i++) {
	if(c%i == 0) {
		d[t] = i;
		t++;
		l++;
	}
}

for(i=0; i<t; i++) {
	if(d[i] < a) l--;
	else if(d[i] > b) l--;
}

printf("%d\n", l);
return 0;
}