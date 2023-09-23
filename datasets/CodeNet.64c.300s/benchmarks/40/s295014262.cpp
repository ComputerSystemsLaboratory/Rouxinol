#include <cctype>
#include <string>
#include <iostream>
using namespace std;

int main()
{
	string str;
	getline(cin, str);

	for(auto c : str) {
		if(isalpha(c)) 
			cout << (char) (isupper(c) ? tolower(c) : toupper(c));
		else
			cout << c;
	}
	cout << endl;

	return 0;
}

