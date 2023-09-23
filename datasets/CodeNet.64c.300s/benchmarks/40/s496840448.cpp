#include<iostream>
#include<cctype>

using namespace std;

int main() {
	char ch;
	while (1){
		cin.get(ch);
		if (ch == '\n') break;
		if (islower(ch)) cout << (char)toupper(ch);
		else if (isupper(ch)) cout << (char)tolower(ch);
		else cout << ch;
	}
	cout << endl;
}