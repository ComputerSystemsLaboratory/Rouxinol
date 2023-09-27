#include <iostream>
#include<ctype.h>
#include<stdio.h>
using namespace std;

int main() {

	char ch[2000];
	scanf("%[^\n]", ch);
	for (int i = 0; ch[i] != '\0'; i++) {
		char c = ch[i];
		if ('a' <= c && c <= 'z') {
			printf("%c", toupper(c));
		}
		else if ('A' <= c && c <= 'Z') {
			printf("%c", tolower(c));
		}
		else {
			printf("%c",c);
		}
	}printf("\n");
		return 0;
}
