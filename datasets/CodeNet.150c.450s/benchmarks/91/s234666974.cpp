#include <iostream>
#include <vector>
using namespace std;

int eratos(int n) {
	int cnt = 0;
	vector<bool> is_prime(n+1,true);
	is_prime[0] = is_prime[1] = false;
	for (auto i = 2; i <= n; i++) {
		if (is_prime[i]) {
			++cnt;
			for (auto j = 2*i; j <= n; j += i)
				is_prime[j] = false;
		}
	}
	return cnt;
}

int main() {
	for (int n; cin>>n; cout<<eratos(n)<<endl);
	return 0;
}