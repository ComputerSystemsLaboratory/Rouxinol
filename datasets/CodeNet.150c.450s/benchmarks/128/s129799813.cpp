#include <stdio.h>

int main(void)
{
	char str[21];
	int i, j;

	scanf("%s", str);

	i = 0;
	while (str[i] != '\0'){
		i++;
	}

	for (j = i - 1; j >= 0; j--){
		printf("%c", str[j]);
	}
	printf("\n");

	return (0);
}