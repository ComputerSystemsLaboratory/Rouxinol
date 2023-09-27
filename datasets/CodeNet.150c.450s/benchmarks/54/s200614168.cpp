#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

void tolower(char str[]) {
	for (int i = 0; i < strlen(str); i++) {
		str[i] = tolower(str[i]);
	}
}

int main() {

	char w[11];
	scanf("%s", w);
	tolower(w);

	int count = 0;

	while (1) {
		char t[1001];
		scanf("%s", t);
		if (strcmp(t, "END_OF_TEXT") == 0) {
			break;
		}
		tolower(t);

		if (strcmp(w, t) == 0) {
			count++;
		}
	}

	cout << count << endl;

	return 0;
}