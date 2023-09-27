#include<iostream>
#include <cstdio>
#include <algorithm>

using namespace std;

int main() {

	char str[20];
	int i, len=0;

	cin >> str;

	while (str[len]) 
		len++;

	for (i = len - 1; i >= 0; i--)
		cout << str[i];

	putchar('\n');

	return 0;

}