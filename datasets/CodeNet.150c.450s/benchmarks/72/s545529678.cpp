#include <iostream>
#include <string>
#include <ctype.h>
using namespace std;

int main()
{
	string str;

	getline(cin, str);

	for (unsigned int i = 0; i < str.size(); i++) {
		if (islower(str[i]))
			cout << (char)toupper(str[i]);
		else if (isupper(str[i]))
			cout << (char)tolower(str[i]);
		else
			cout << str[i];
	}
	cout << endl;

    return 0;
}