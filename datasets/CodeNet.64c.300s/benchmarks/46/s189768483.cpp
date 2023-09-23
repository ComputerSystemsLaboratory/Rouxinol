#include<iostream>
using namespace std;
#include<cmath>
typedef long long ll;
ll prime[1000001];
ll length = 0;
bool isprime[1000000] = {};
void insert(ll p) { prime[length] = p; length++; isprime[p] = true; return; }
void makeprime() {
	insert(2);
	for (ll i = 3; i < 1000000; i += 2) {
		for (ll j = 0; j < length; j++)
			if (i%prime[j] == 0)goto cont;
			else if (prime[j] > sqrt(i))break;
			insert(i);
		cont:;
	}
}
int main() {
	makeprime();
	int a, d, n;
	while (cin >> a >> d >> n, a, d, n) {
		int cnt = 0;
		for (int i = a;; i += d) {
			if (isprime[i]) { cnt++; if (cnt == n) { cout << i << endl; goto end; } }
		}
	end:;
	}
}