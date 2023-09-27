#define MAXLENGTH (1200)
#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;


int main()
{
	string str;
	getline(cin, str);

	for (int i=0; i<str.size();i++){
		if (str[i] >= 'a'&&str[i] <= 'z') {
			cout << (char)(str[i] - 'a' + 'A');
		}
		else if (str[i] >= 'A'&&str[i] <= 'Z') {
			cout << (char)(str[i] - 'A' + 'a');
		}
		else cout << (char)str[i];
	}
	cout << endl;

	return 0;
}

