#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>


using namespace std;

int main() {	
	char input[1001] = { 0 };
	int inputlen = 0,number=0,SON=0;
	while (scanf("%s", input) == 1) {
		if (input[0] == '0')break;
		inputlen = strlen(input);
		for (int i = 0; i < inputlen; i++) {
			if (48 <= input[i] && input[i] <= 57) {
				number = input[i] - 48;
			}
			SON += number;
		}
		printf("%d\n", SON);
		SON = 0;
	}
	return 0;
}