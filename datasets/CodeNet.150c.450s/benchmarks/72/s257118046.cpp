#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;

int main(void)
{	
	char str[1200] = "\0";
	cin.getline(str, 1200);
	
	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 'a' && str[i] <= 'z') {
			str[i] = toupper(str[i]);
		} else if (str[i] >= 'A' && str[i] <= 'Z') {
			str[i] = tolower(str[i]);
		}
	}
	
	cout << str << endl;
	
	return 0;
}