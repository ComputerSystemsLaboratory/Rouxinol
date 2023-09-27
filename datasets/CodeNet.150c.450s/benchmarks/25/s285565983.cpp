#include <iostream>
#include <stdio.h>
#include <math.h>
#include <string>
using namespace std;

int main() {
	char s;
	int a[26] = {};
	while (cin >> s) {
		if (islower(s)) a[s - 'a']++;
		if (isupper(s)) a[s - 'A']++;
	}
	for (int i = 0; i < 26; i++) {
		char ch = i + 'a';
		cout << ch << " : " << a[i] << endl;
	}

	return 0;
}