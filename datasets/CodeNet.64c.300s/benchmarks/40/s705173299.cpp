#include<iostream>
#include<string>
#include<ctype.h>
#include<cstdio>

using namespace std;


int main() {
	char a[1200],*p;
	int i,j;
	p = a;
	for (i = 0; i < 1200; i++) {
		a[i]=getchar();
		if (a[i] == '\n') {
			break;
		}
	}
	for (j = 0; j < i; j++) {
		if (isupper(a[j]) != 0) {
			a[j] = tolower(a[j]);
		}
		else if (islower(a[j]) != 0) {
			a[j] = toupper(a[j]);
		}
		else if (a[j] == '\n') {
			break;
		}
	}
	for (j = 0; j < i; j++) {
		cout << a[j];
	}
	cout << endl;
	return 0;
}