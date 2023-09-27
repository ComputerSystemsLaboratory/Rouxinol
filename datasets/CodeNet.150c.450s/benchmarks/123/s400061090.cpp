#include <bits/stdc++.h>
using namespace std;
vector<int>primes;
void set_prime(int i) {
	for (int j = 2; j * j <= i; j++){
		if (i % j == 0)return;
	}
	primes.push_back(i);
}
bool prime(int a) {
	if (a == 1)return false;
	for (auto i : primes) {
		if (a % i == 0 && i != a)return false;
	}
	return true;
}
int main(){
	for (int i = 2; i <= 9973; i++)set_prime(i);
	int n, ans = 0;
	cin >> n;
	while (n--) {
		int a;
		cin >> a;
		ans += prime(a);
	}
	cout << ans << endl;
}
