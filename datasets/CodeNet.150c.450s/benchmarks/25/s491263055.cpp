#include <iostream>
#include <cstdio>
#include <cctype>

using namespace std;

int main()
{
	int a[26] = {0};
	char x;
	bool flag = false;

	while(cin >> x) {
		if(isupper(x)) x = tolower(x);
		if ('a' <= x && x <= 'z') {
			a[x - 'a']++; 
		}
	}

	for (int i = 0; i < 26; i++) {
		printf("%c : %d\n", i + 'a', a[i]);
	}

	return (0);
}