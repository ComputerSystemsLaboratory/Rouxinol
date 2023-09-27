/*
 * CountingCharacters.cpp
 *
 *  Created on: 2014/07/27
 *      Author: WanWan1985
 */
#include <iostream>
#include <stdio.h>
#include <cctype>	// for isupper() or islower()
#include <vector>

#define SIZE	(26)

using namespace std;

int main(void) {

	char ch;
	int iCounter[SIZE] = { 0 };

	while (cin >> ch) {

		if (isupper(ch)) {
			ch = tolower(ch);
		}

		int iIndex = ch - 'a';
		iCounter[iIndex]++;
	}

	int i = 'a';
	for (unsigned int j = 0; j < SIZE; j++) {
		printf("%c : %d\n", i + j, iCounter[j]);
	}

	return 0;
}