#include <stdio.h>
int main(void)
{
	int h, m, s;
	int temp;

	scanf("%d", &s);

	h = s / 3600;
	temp = s % 3600;

	m = temp / 60;

	s = temp % 60;


	printf("%d:%d:%d\n", h, m,s);
	return(0);
}