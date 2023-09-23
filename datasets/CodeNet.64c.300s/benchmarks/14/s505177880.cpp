#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>




int main() {
	
	int a, b;

	std::cin >> a >> b;

	if (a > b) {
		printf("a > b");
	}
	else if (a < b) {
		printf("a < b");
	}else {
		printf("a == b");
	}

	printf("\n");

	//system("pause");
	return 0;
}
