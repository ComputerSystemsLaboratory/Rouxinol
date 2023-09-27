#include <iostream>
#include <cctype>
#include <cstdio>
using namespace std;

int main() {
	
	while (true){
		char ch;
		scanf("%c",&ch);
		char ch1=toupper(ch);
		char ch2=tolower(ch);
		if (ch=='\n' ) break;
		if (!isalpha(ch)) cout<<ch;
		else if (islower(ch)) cout<<ch1;
		else if (isupper(ch)) cout<<ch2;
	}
	cout<<endl;

	return 0;
}