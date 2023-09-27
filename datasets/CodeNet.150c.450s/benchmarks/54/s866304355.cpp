#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <iostream>
using namespace std;

int main(void)
{	
	char w[11] = "\0";
	cin >> w;
	
	int cnt = 0;
	while (1) {
		char buf[1001] = "\0";
		cin >> buf;
		if (strcmp(buf, "END_OF_TEXT") == 0) break;
		for (int i = 0; buf[i] != '\0'; i++) {
			buf[i] = tolower(buf[i]);
		}
		if (strcmp(buf, w) == 0) cnt++;
	}
	
	cout << cnt << endl;
	
	return 0;
}