#include <iostream>

using namespace std;

int main() {
	bool prime[1000000];
	fill_n((bool *)prime, 1000000, true);
	prime[1]=false;
	for(int i=2; i<1000000; i++){
		if(prime[i]){
			for(int j=2; i*j<1000000; j++){
				prime[i*j] = false;
			}
		}
	}
	int a, d, n;
	while(cin >> a >> d >> n, a|d|n){
		int count = 0;
		int i;
		for(i = a; i < 1000000; i+=d){
			if(prime[i]) count++;
			if(count == n) break;
		}
		cout << i << endl;
	}

	return 0;
}