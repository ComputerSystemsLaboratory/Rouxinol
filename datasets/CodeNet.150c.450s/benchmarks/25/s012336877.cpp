#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;

int main(int argc, char **argv)
{
	char ch;
	int count[26] = { 0 };

	while(cin >> ch) {
		ch = tolower(ch);
		if(ch >= 'a' && ch <= 'z') count[ch - 'a']++;
	}
	for(char ch = 'a'; ch <= 'z'; ch++) cout << ch << " : " << count[ch - 'a'] << endl;

	return 0;
}