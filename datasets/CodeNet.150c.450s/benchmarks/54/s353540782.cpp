#include <iostream>
#include <string.h>
using namespace std;

int main(void) {
	char word[11], str[15];
	int count = 0, i, slen;
	cin >> word;
	while (1) {
		cin >> str;
		if (strcmp(str, "END_OF_TEXT") == 0)
			break;
		slen = strlen(str);
		for (i = 0; i < slen; i++) {
			if ('A' <= str[i] && str[i] <= 'Z')
				str[i] = str[i] - 'A' + 'a';
		}
		if (strcmp(str, word) == 0)
			count++;
	}
	cout << count << endl;
	return 0;
}