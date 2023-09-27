#include<iostream>
#include<cstdio>
#include<cctype>

using namespace std;

int main() {
	char x;
	for (;;) {
		scanf("%c", &x);
		
		if(x=='\n')break;

		if (islower(x)==0) {
			cout << char(tolower(x));
		}
		else if (islower(x)!=0) {
			cout << char(toupper(x));
		}else{
			cout << x;
		}
	}
		
	cout << endl;

	return 0;
}