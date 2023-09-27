#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

int main() {
	char ch;
	int count[26] = {};
	while (scanf("%c", &ch) != EOF) {
		ch = tolower(ch);
		int num = ch - 'a';
		count[num]++;
	}
	for (int i = 0; i < 26; i++) {
		printf("%c : %d\n", 'a' + i, count[i]);
	}
	return 0;
}