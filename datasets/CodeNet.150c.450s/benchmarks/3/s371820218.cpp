#include <iostream>
#include <cstdio>
#include <cstring>

#include <string>

using namespace std;

void print(int a, int b, char str[]) {
	for (int i = a; i <= b; i++) {
		printf("%c", str[i]);
	}
	printf("\n");
}

void reverse(int a, int b, char str[]) {
	for (int i = a, j = b; i < j; i++, j--) {
		char tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}

void replace(int a, int b, char p[], char str[]) {
	for (int i = a, j = 0; i <= b; i++, j++) {
		str[i] = p[j];
	}
}

int main() {
	char str[1001];
	cin >> str;

	int q;
	cin >> q;

	for (int i = 0; i < q; i++) {
		char cmd[10], p[1000];
		int a, b;
		cin >> cmd >> a >> b;
		if (strcmp(cmd, "print") == 0) {
			print(a, b, str);
		} else if (strcmp(cmd, "reverse") == 0) {
			reverse(a, b, str);
		} else if (strcmp(cmd, "replace") == 0) {
			cin >> p;
			replace(a, b, p, str);
		}
	}
	return 0;
}