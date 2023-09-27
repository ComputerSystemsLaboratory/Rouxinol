#include <iostream>
#include <string.h>
using namespace std;

int main() {
	char a[25];
	char b[25];
	int i = 0;
	cin >> a;
	int length = strlen(a);
	for(int t = 0;t<=length;t++)
		b[t]=a[length-t-1];
	b[length] = a[length];
	cout << b;
	cout << endl;

	return 0;
}