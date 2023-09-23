#include<iostream>
#include<cmath>
using namespace std;

bool isprime(int a);

int main() {
	int i, n, a, count = 0;
	cin >> n;
	for (i = 0; i < n; i++) {
		cin >> a;
		if (isprime(a) == true)count++;
	}
	cout << count << endl;
	return 0;
}

bool isprime(int a) {
	int i;
	bool flag;
	for (i = 2; i < sqrt(a); i++) {
		if (a % i == 0)break;
	}
	if (i > sqrt(a))return true;
	else return false;
}