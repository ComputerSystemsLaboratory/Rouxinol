#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

int main() {

	char num[1000];
	int sum;
	int int_num;

	while (cin >> num) {

		if ((int)num[0] - (int)'0' == 0) {
			break;
		}

		sum = 0;

		//cout << strlen(num) << endl;
		
		for (int i = 0; i < strlen(num); i++) {
			//cout << "num[i]=" << num[i] << endl;
			//cout << "(int)num[i]=" << (int)num[i] << endl;
			//cout << "int_num-(int)'0'=" << int_num-'0' << endl;
			sum += (int)num[i] - (int)'0';
		}

		cout << sum << endl;
	}

	return 0;
}