#include<iostream>
#include<cstdio>
#include<cctype>
using namespace std;
char ch;

int cnt[26] = {};
int main()
{

	while ( cin >> ch ) {
		ch = tolower(ch);
		if (isalpha(ch)) {
			cnt[ch - 'a']++;
		}
	}
	for (int i = 0; i < 26; i++) {
		printf("%c : %d\n", i + 'a', cnt[i]);
	}
	return 0;
}
