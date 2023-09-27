#include<cstdio>
#include<cctype>

int main() {
	char c[1200] = {};
	int i = 0;
	int alpha[26] = {};

	while (scanf("%c", &c[i]) != EOF) 
	{
		if (isalpha(c[i])) {
			if (islower(c[i]))	alpha[c[i] - 'a']++;
			else alpha[c[i] - 'A']++;
		}
		i++;
	}

	for (int i = 0; i < 26; i++) {
		printf("%c : %d\n", i + 'a', alpha[i]);
	}

	return 0;
}