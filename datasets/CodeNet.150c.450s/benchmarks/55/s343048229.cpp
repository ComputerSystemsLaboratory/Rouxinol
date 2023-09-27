#include <iostream>
#include <string>

#include <stdio.h>
using namespace std;

int main(void) {
	while (1) {
		string num;
		int sum = 0;
		cin >> num;
		if (num == "0") break;
		for (int i = 0; i < num.length(); i++) {
			sum += num[i] - '0';
		}
		cout << sum << endl;
	}
	return 0;
}

