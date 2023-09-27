#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;



int main()
{
	int i = 0;
	char a[20];

	scanf("%s", a);

	while (1) {
		i++;
		if (a[i] == '\0') break;
	}
	i--;
	while (i != -1) {
		printf("%c", a[i]);
		i--;
	}
	printf("\n");
	

		return (0);
	
}