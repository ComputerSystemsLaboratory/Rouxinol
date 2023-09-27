#include <iostream>
#include <cstdio>
using namespace std;

int main(void) {
	char c;
	int count[26] = {0}, i;
	while (1) {
		if (scanf("%c", &c) == EOF)
			break;
		if ('a' <= c && c <= 'z')
			count[c-'a']++;
		else if ('A' <= c && c <= 'Z')
			count[c-'A']++;
	}
	for (i = 0; i < 26; i++) {
		cout << (char)(i + 'a') << " : " << count[i] << endl;
	}
	return 0;
}