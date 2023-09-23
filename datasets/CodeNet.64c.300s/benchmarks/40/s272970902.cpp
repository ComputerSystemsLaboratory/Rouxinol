#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(void)
{
	string str;
	int i;

	getline(cin, str);

	for (i=0; str[i]!='\0'; i++) {
		if ((str[i] >= 'A') && (str[i] <= 'Z')) {
			str[i] += ' ';
		}
		else if ((str[i] >= 'a') && (str[i] <= 'z')) {
			str[i] -= ' ';
		}
		else {
			;
		}
	}

	cout << str << endl;

	return 0;
}


