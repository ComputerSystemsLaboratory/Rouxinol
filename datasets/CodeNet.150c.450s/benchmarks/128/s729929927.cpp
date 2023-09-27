// Reverse Sequence
#include <cstdio>
#include <cstring>

int main()
{
	char str[20+1] = {0};
	scanf("%s", str);
	
	size_t n = strlen(str);
	
	for (int i = n -1; i >= 0; i--)
		printf("%c", str[i]);
	printf("\n");
	
	return 0;
}