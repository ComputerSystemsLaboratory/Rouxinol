#include <iostream>
#include <string>
#include <stddef.h>
#include <stack>
#include <queue>
#include <cctype>
#include <stdio.h>

using namespace std;


int main() {
	
	char ch;
	int a[26];
	fill(a, a + 26, 0);
	
	while (scanf("%c",&ch)!=EOF) {
		if (isalpha(ch)) {
			if (isupper(ch)) ch = tolower(ch);
			a[ch - 'a']++;
		}
	}


	for (int i = 0; i < 26; i++) {
		cout << (char)('a' + i) << " : " << a[i] << endl;
	}
	
}