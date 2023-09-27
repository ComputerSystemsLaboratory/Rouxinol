#include <cstdio>
#include <cctype>

#define A_NUM 26
using namespace std;

int main(void) {

	char ch;
	int alpha[A_NUM] = {};

	while (scanf("%c", &ch) != EOF) {
		if (isalpha(ch)) {
			if (isupper(ch)) ch = tolower(ch);
			alpha[(int)(ch - 'a')]++;
		}
	}

	for (int i = 0; i < A_NUM; i++) {
		printf("%c : %d\n", (char)(i + 'a'), alpha[i]);
	}

	return 0;
}