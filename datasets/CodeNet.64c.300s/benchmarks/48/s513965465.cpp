#include <bits/stdc++.h>
using namespace std;

const int maxn = 1e7+10;

int prime[maxn];
bool is_prime[maxn];

int sieve(const int& n){
	int p = 0;
	fill(is_prime,is_prime+n+1,true);
	is_prime[0] = is_prime[1] = false;

	for(int i=2; i<=n; i++){
		if(is_prime[i]){
			prime[p++] = i;
			for(int j=2*i; j<=n; j+=i){
				is_prime[j] = false;
			}
		}
	}

	return p;
}

int main(){
	int n;
	while(cin>>n){
		cout << sieve(n) << endl;
	}
}