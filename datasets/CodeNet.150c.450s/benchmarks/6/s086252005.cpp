#include <stdio.h>


int main(int argc, char* argv[])
{
	int a, b, c;
	char temp[100];

	fgets(temp, sizeof(temp), stdin);
	sscanf(temp, "%d %d %d", &a, &b, &c);

	if (a < b && b < c) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}