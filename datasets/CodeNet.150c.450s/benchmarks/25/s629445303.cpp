#include <iostream>
#include<cstdio>
#include<string>
#include<stdio.h>
using namespace std;

int main() {
	int count[300] = {0};
	char word;
	
	while ((word = getchar()) !=EOF) {
		count[word]++;
	}

	for (int i = 97; i <= 122; i++)printf("%c : %d\n", i, count[i] + count[i - 32]);

	return 0;
}


