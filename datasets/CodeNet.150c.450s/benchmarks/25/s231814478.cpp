#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include<string>
#include<stdio.h>
#include<string.h>

using namespace std;

int main() {	
	string input;
	char in[1201] = { 0 },moji[26];
	int inputlen = 0, count[26] = { 0 }, i , n, j = 0;
	while (getline(cin, input)) {
		i = 0;
		while (input[i] != '\0') {
			n = 65;
			while (n != 91) {
				if (input[i] == n) count[n - 65]++;
				n++;
			}
			n = 97;
			while (n != 123) {
				if (input[i] == n) count[n - 97]++;
				n++;
			}
			i++;
		}
	}
	for (int k = 97; k < 123; k++) {
		printf("%c : %d\n", k, count[j]);
		j++;
	}
	return 0;
}