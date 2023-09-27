#include <cstdio>
#include <cctype>
int main() {
	int n[26] = { 0 };
	char c;
	while (scanf("%c", &c) != EOF)
		n[(int)tolower(c) - 97]++;
	c = 97;
	for (int i = 0; i < 26; i++)
		printf("%c : %d\n", c + i, n[i]);
}