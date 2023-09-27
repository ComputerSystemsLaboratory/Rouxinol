#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	unsigned int n[27];
    for (unsigned int i = 0; i < 26; ++i)
		n[i] = 0;

	char ch;
	while (cin >> ch) {
		if (islower(ch))
			n[ch-'a']++;
		else if (isupper(ch))
			n[ch-'A']++;
	}


		for (unsigned int i = 0; i < 26; ++i) {
			cout << (char)('a' + i)  << " : " << n[i] << endl;
		}

	return 0;
}

