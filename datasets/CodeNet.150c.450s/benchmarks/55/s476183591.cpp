#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

int main(void)
{
	string str;
	int sum;
	int i;

	while (1) {
		cin >> str;
		sum = 0;
		for (i=0; str[i]!='\0'; i++) {
			sum += (str[i] - '0');
		}

		if (sum == 0) {
			break;
		}
		else {
			cout << sum << endl;
		}
	}

	return 0;
}


