#include<cstdio>
#include<iostream>
#include<map>
#include<vector>
#include<algorithm>
using namespace std;
int prime[1000001];
int main() {
	prime[1] = 1;
	for(int i = 2; i * i <= 1000000; i++) {
		if(prime[i] == 1) continue;
		for(int j = i * i; j <= 1000000; j+=i) {
			prime[j] = 1;
		}
	}
	while(1) {
		int a,d,n;
		cin >> a >> d >> n;
		if(a == 0 && d == 0 && n == 0) break;
		int cnt = 0;
		for(int j = a; ; j += d) {
			if(prime[j] == 0) cnt++;
			if(cnt == n) {
				cout << j << endl;
				break;
			}
		}
	}
	return 0;
}