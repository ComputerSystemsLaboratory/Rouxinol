#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<stdio.h>
#include<string.h>
#include<string>

using namespace std;

int main() {	
	string in;
	char input[1201] = { 0 };
	int m = 0, n = 0, ascii = 0, inputlen = 0;
	getline(cin, in);
	while (in[m] != '\0') {
		input[m] = in[m];
		m++;
	}
	inputlen = strlen(input);
	for (int i = 0; i < inputlen; i++) {
		ascii = input[i];
		if (65 <= ascii&&ascii <= 90) {
			ascii += 32;
			input[i] = ascii;
		}
		else if (97 <= ascii&&ascii <= 122) {
			ascii -= 32;
			input[i] = ascii;
		}
	}
	while (input[n] != '\0') {
		printf("%c", input[n]);
		n++;
	}
	cout << endl;
	return 0;
}