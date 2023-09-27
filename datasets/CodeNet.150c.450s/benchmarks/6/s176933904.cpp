#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>




int main() {
	
	int a, b, c;

	std::cin >> a >> b >> c;

	if (a < b && b < c) {
		printf("Yes\n");
	}
	else {
		printf("No\n");
	}

	//system("pause");
	return 0;
}
