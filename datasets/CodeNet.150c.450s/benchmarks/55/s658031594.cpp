#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str;

	getline(cin, str);

	while (str[0] != '0') {
		int n = 0;

		for (unsigned int i = 0; i < str.size(); i++) 
			n += str[i] - '0';

		cout << n << endl;

		getline(cin, str);
	}

    return 0;
}