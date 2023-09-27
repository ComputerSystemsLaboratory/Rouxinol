#include <iostream>
using namespace std;

bool prime[1000000];

int main(){
	int a, d, n;
	fill(prime, prime + 1000000, true);
	prime[0] = prime[1] = false;
	for(int i = 2; i * i < 1000000; i++){
		if(prime[i])
		for(int j = 2; i * j < 1000000; j++){
			prime[i*j] = false;
		}
	}
	while(cin >> a >> d >> n && (a || d || n)){
		int count = 0;
		if(prime[a]) count++;
		while(count < n){
			a += d;
			if(prime[a]) count++;
		}
		cout << a << endl;
	}
	return 0;
}