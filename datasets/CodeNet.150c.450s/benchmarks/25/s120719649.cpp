#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
	const int numOfAlp = 26;
	char ch;
	int *cnt = new int[numOfAlp];
	for (int i = 0; i < numOfAlp; i++) cnt[i] = 0;
	while (scanf("%c", &ch) != EOF) {
		if ('A' <= ch && ch <= 'Z') ch = tolower(ch);
		if ('a' <= ch && ch <= 'z') cnt[ch - 'a']++;
	}
	for (int i = 0; i < numOfAlp; i++) {
		printf("%c : %d\n", 'a' + i, cnt[i]);
	}
}