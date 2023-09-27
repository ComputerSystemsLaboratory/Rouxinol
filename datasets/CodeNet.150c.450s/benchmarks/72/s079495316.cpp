#include "iostream"
#include<stdio.h>
#include<cctype>
#include<string>
using namespace std;

int main()
{
	string a;
	int b = 0;
	getline(cin, a);
	while (a[b]) {
		if (islower(a[b])) {
			a[b] = toupper(a[b]);
		}
		else if (isupper(a[b])) {
			a[b] = tolower(a[b]);
		}
		b++;
	}
	cout << a<<endl;
}