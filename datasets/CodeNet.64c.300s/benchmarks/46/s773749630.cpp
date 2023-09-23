#include <iostream>
#include <cstdio>
using namespace std;

const int N = 2000000;
int prime[N];

void Eratos(){
	for(int i=0; i<N; i++){
		prime[i] = 1;
	}

	prime[0] = prime[1] = 0;
	for(int i=2; i*i<=N; i++){
		if(prime[i] == 1){
			for(int j=i*2; j<N; j+=i){
				prime[j] = 0;
			}
		}
	}
}

int main(void){
	Eratos();
	while(1){
		int a, d, n;
		cin >> a >> d >> n;

		if(a == 0 && d == 0 && n == 0) break;

		int s = a;
		int cnt = 0;
		for(int i = 0; ; i++){
			if(prime[s] == 1){
				cnt++;
				if(cnt == n) {
					cout << s << endl;
					break;
				}
			}
			s += d;
		}
	}


	return 0;
}