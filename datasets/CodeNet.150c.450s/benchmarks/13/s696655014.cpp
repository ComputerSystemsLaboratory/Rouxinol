#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

int main() {
	char s[101];
	cin >> s;

	char p[101];
	cin >> p;

	int flag;
	for (int i = 0; i < strlen(s); i++) {
		flag = 1;
		for (int j = 0; j < strlen(p); j++) {
			if (s[(i + j)%strlen(s)] != p[j]) {
				flag = 0;
				break;
			}
		}
		if (flag) {
			break;
		}
	}
	if (flag) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	return 0;
}