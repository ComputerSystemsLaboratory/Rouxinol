#include<stdio.h>
int main(void)
{
	int a,b,c,i,m;
	scanf("%d %d %d", &a, &b, &c);
	i = 1;
	m = 0;
	while (i <= 10000){
		if (c%i == 0 && a <= c / i&&c / i <= b)
			m = m + 1;
		i++;
	}
	printf("%d\n", m);
	

	return 0;
}