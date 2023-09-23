#include<iostream>
#include<stdio.h>
using namespace std;
int main() {
	int a, c;
	char o;
	while (1) {
		scanf("%d %c %d",&a,&o,&c);
		if (o == '?') break;
		else if (o == '+') {
			cout << a + c << endl;
		}
		else if (o == '-') {
			cout << a - c << endl;
		}
		else if (o == '*') {
			cout << a * c << endl;
		}
		else if (o == '/') {
			printf("%d\n", a / c);
		}
		else
			return 0;
	}
	return 0;
}