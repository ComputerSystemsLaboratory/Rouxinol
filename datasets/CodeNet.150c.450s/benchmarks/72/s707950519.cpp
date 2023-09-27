#include<iostream>
#include<cctype>
#include<cstdio>
using namespace std;

int main() {
	char ch;
	while (1) {
		scanf("%c", &ch);
		if (ch == '\n') break;
		else if (islower(ch)) {
			ch = toupper(ch); cout << ch;
		}
		else if (isupper(ch)) {
			ch = tolower(ch); cout << ch;
		}
		else cout << ch;
		
	}
	cout << endl;

	return 0;
}
