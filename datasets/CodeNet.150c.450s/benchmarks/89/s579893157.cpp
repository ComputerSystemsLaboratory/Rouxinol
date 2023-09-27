#include <iostream>
#include <cstdio>
#include <algorithm>

bool prime[1000000];

int main()
{
	int a, d, n;

	for (int i = 0; i < 1000000; i++){
		prime[i] = true;
	}
	prime[0] = prime[1] = false;

	for (int i = 2; i * i < 1000000; i++){
		for (int j = i * i; j < 1000000; j += i){
			prime[j] = false;
		}
	}

	while (true){
		scanf("%d %d %d", &a, &d, &n);
		if (a == 0){
			break;
		}

		int cnt = 0;
		while (cnt != n){
			if (prime[a]){
				cnt++;
			}
			a += d;
		}

		printf("%d\n", a - d);
	}
	
	return (0);
}