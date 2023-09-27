#include<iostream>
using namespace std;
#define MAX 1000000

bool prime[MAX];

int countPrime(int n){
	if(n < 2) return 0;
	if(n == 2) return 1;

	int ret = 0;

	for(int i = 0; i < MAX; i++){
		prime[i] = true;
	}

	for(int i = 2; i * i <= n; i++){
		if(prime[i]){
			for(int j = i*i; j <= n; j += i){
				prime[j] = false;
			}
		}
	}
	for(int i = 2; i <= n; i++){
		if(prime[i]) ret++;
	}
	return ret;
}

int main(){
	int n;
	while(cin >> n){
		cout << countPrime(n) << endl;
	}
}