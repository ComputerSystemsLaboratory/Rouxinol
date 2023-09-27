#define scanf_s scanf
#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;
#define MAX 20
int main(void)
{
	int i;
	char str[MAX + 1];
	scanf_s("%s", str, MAX);
	for (i = 0; str[i + 1] != '\0'; ++i);
	for (; i >= 0;--i){
		printf("%c", str[i]);
	}
	printf("\n");
}