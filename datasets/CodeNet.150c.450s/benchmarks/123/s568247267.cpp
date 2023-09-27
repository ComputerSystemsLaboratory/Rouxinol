#include<iostream>
#include<math.h>
using namespace std;

int isPrime(int x) {
	if (x <= 1) return false;
	if (x>2&&x % 2 == 0) return false;
	for (int i = 2;i <= sqrt(x);i++) {
		if (x%i == 0) {
			return false;
		}
	}
	if (x == 2) return true;
	return true;
}
int main() {
	int N;
	long long int a;
	cin >> N;
	int num = 0;
	for (int i = 0;i < N;i++) {
		cin >> a;
		if (isPrime(a)) {
			num++;
		}
	}
	cout << num << endl;

}