#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char str[1001] = { 0 };

	cin.getline(str, 1001);

	while (str[0] != '0') {
		int n = 0;

		for (unsigned int i = 0; i < strlen(str); i++) 
			n += str[i] - '0';

		cout << n << endl;

		cin.getline(str, 1001);
	}

    return 0;
}