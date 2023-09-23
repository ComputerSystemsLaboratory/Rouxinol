#include <stdio.h>

int main(void)
{
	int ka, ki, ku, i = 0, x;

	scanf("%d %d %d", &ka, &ki, &ku);

	for (x = ka; x <= ki; x++){

		if (ku % x == 0)
		i++;

		else;
	}
	printf("%d\n" ,i);
	return 0;
}