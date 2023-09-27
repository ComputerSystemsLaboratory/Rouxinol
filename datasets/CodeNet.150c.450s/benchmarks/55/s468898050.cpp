#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	while (1) {
		char str[1200];
		cin >> str;

		if (strcmp(str, "0") == 0) {
			break;
		}

		int total = 0;
		for (int i = 0; str[i] != NULL; i++) {
			total += (int)(str[i] - '0');
		}
		printf("%d\n", total);
	}
	return 0;
}