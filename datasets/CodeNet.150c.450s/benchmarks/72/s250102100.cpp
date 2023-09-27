#include <iostream>
#include <string>
#include <cctype>
using namespace std;
int main()
{
	string str;
	getline(cin, str);
	
	for (char &c : str) {
		if (isalpha(c)) c = isupper(c) ? tolower(c) : toupper(c);
		cout << c;
	}
	cout << endl;
}