#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<iostream>
#include<string>
using namespace std;


int main() {

	string str;
	char a[20];
	int size = 0;
	cin >> str;

	for (int i = 0;;i++) {
		if (str[i] == '\0')break;
		size++;
	}

	for (int i = size; i > 0; i--) {
		printf("%c", str[i - 1]);
	}
	printf("\n");

	//system("pause");
	return 0;
}
