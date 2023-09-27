#include<stdio.h>
int main(void)
{
	int a, b, c, temp;

	scanf("%d %d %d", &a, &b, &c);
	if (a <= b){	}
	else{
		temp = a;
		a = b;
		b = temp;
	}


	if (a <= c){	}
	else{
		temp = a;
		a = c;
		c = temp;
	}
	if (b <= c){	}
	else{
		temp = b;
		b = c;
		c = temp;
	}

	printf("%d %d %d\n", a, b, c);

	return(0);
}