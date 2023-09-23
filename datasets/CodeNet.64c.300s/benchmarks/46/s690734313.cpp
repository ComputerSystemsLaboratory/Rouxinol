#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <utility>
#include <cstring>
using namespace std;

#define rep(i,n) for(int i=0; i<n; i++)
typedef long long ll;

bool prime[1000001];

int main() {
	for(int i=2; i*i<=1000000; i++) {
		if(!prime[i]) {
			for(int j=i+i; j<=1000000; j+=i) {
				prime[j] = true;
			}
		}
	}
	prime[0] = prime[1] = true;
	int a, d, n;
	while(cin >> a >> d >> n, a||d||n) {
		int cnt = 0;
		while(cnt<n) {
			if(!prime[a]) cnt++;
			if(n==cnt) break;
			a += d;
		}
		cout << a << endl;
	}

	return 0;
}