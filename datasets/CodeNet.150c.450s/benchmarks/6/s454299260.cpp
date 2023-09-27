#include <stdio.h>
#include <iostream>
#include <string>

int main(void) {
	int a = 0;
	int b = 0;
	int c = 0;
	std::cin >> a >> b >> c;

	char* str = "";
	if (a < b && b < c) {
		str = "Yes";
	}
	else {
		str = "No";
	}

	printf("%s\n", str);

	return 0;
}
