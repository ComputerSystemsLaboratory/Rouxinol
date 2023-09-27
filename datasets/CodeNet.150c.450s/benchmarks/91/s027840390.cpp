#include <bits/stdc++.h>

using namespace std;

const int MAX = 1000100;
bool prime[MAX];

void sieve(){
	fill(prime, prime+MAX, true);
	prime[0] = prime[1] = false;

	for(int i=2; i*i < MAX; i++){
		if(!prime[i]) continue;
		for(int j=i*i; j < MAX; j += i) prime[j] = false;
	}
}


int main(){
	sieve();
	int n;
	while(cin >> n){
		int ret = 0;
		for(int i=0; i<= n; i++){
			if(prime[i]) ret++;
		}
		cout << ret << endl;
	}
}