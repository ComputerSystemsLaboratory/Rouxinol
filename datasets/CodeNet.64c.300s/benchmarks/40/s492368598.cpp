#include <iostream>
#include <cctype>
#include <stdio.h>
using namespace std;

int main() {
	char ch;
	while (1) {
		scanf("%c", &ch);
		if (islower(ch))
			ch = toupper(ch);
		else
			ch = tolower(ch);
		cout << ch;
		if (ch == '\n') break;
	}
}