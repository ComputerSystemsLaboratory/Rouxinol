#include <iostream>
#include <sstream>
#include <math.h>

using namespace std;

int isPrime(int n);

int main()
{
	string str;
	getline(cin, str);
	int num;
	stringstream num_ss(str);
	num_ss >> num;

	int counter = 0;

	for (int i = 0; i < num; i++) {
		getline(cin, str);
		stringstream tmp_ss(str);
		int n;
		tmp_ss >> n;
		n = isPrime(n);
		if (n != -1) {
			counter++;
		}
	}
	cout << counter << endl;
	return 0;
}

// if the param is a prime number, then return param. Else return -1.
int isPrime(int n) {
	int rtn = n;
	int end_num = (int) sqrt(n) + 1;

	if (n % 2 == 0) {
		if (n == 2) {
			return n;
		} else {
			return -1;
		}
	}

	for (int i = 3; i < end_num; i+=2) {
		if (n % i == 0) {
			rtn = -1;
			break;
		}
	}
	return rtn;
}