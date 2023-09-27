#include <stdio.h>
#include <iostream>
#include <string>

int main(void) {
	int a = 0;
	int b = 0;
	std::cin >> a >> b;

	char* str = "";
	if (a > b) {
		str = ">\0";
	}
	else if (a < b) {
		str = "<\0";
	}
	else {
		str = "==\0";
	}

	printf("a %s b\n", str);
	return 0;
}
