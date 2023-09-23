#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>
#include <cctype>
#include <stdio.h>

using namespace std;


int main() {
	char ch;

	while (1) {
		scanf("%c",&ch);
		if (islower(ch)) ch = toupper(ch);
		else if (isupper(ch)) ch = tolower(ch);
		cout << ch;
		if (ch == '\n') break;
	}
	
	
}