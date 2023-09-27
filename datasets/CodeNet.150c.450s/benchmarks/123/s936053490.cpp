#include<iostream>
#include<cmath>
using namespace std;
bool isprime(int n) {
	if (n == 2)return true;
	if (n % 2 == 0)return false;
	for (int i = 3; i <= sqrt(n); i += 2) if (n%i == 0)return false;
	return true;
}
int main() {
	int n; cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++){
		int a; cin >> a;
		if (isprime(a))sum++;
	}
	cout << sum << '\n';
	return 0;
}