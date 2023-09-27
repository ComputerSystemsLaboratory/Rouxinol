#include <stdio.h>
#include <iostream>
#include <ctype.h>
using namespace std;

int main(void)
{	
	char c;
	int count[26] = {0};
	while (cin >> c){
		c = tolower(c);
		if (c >= 'a' && c <= 'z') {
			count[c-'a']++;
		}
	}
	
	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " : " << count[i] << endl;
	}
	
	return 0;
}