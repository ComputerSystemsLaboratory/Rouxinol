#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

bool prime[1000000];

int main(void)
{
	for(int i=0;i<1000000;i++)prime[i] = true;
	prime[0] = prime[1] = false;
	for (int i = 4; i < 1000000; i+=2) prime[i] = false;
	for (int i = 3; i < 1000000; i+=2){
		for (int j = i+i; j < 1000000; j+=i) prime[j] = false;
	}
	//for (int i = 0; i < 100; i++) if (prime[i]) cout << i << endl;
	int a, d, n;
	while (cin >> a >> d >> n, a && d, d && n){
		int cnt = 0;
		int tmp = a;
		if (prime[tmp]) cnt++;
		if (cnt == n) goto A;
		while (1){
			tmp += d;
			if (prime[tmp]) cnt++;
			if (cnt == n) break;
		}
		A:;
		cout << tmp << endl;
	}
	
	return 0;
}