#include <iostream>
using namespace std;
#include <stdio.h>
int main()
{
	char str[1201];
	int count[26] = { 0 }, i = 0, k;
	for (i = 0;;i++){
		str[i] = getchar();
		if (str[i] == '\n') break;
		if ('a' <= str[i] && str[i] <= 'z'){
			k = str[i] - 'a';
			str[i] = 'A' + k;
		}
		else if ('A' <= str[i] && str[i] <= 'Z'){
			k = str[i] - 'A'; 
			str[i] = 'a' + k;
		}
	}
	for (i=0;;i++){
		printf("%c", str[i]);
		if (str[i] == '\n') break;
	}
	return 0;
}