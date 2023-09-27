#include <iostream>
#include <cstdio>
using namespace std;

#define MAX_SIZE (1000000)

int prime[MAX_SIZE];

int main()
{
	int n;
	
	prime[0] = prime[1] = 0;

	for (int i = 2; i < MAX_SIZE; i++){
		prime[i] = 1;
	}

	// Sieve of Eratosthenes
	for (int i = 2; i * i < MAX_SIZE; i++){
		if (prime[i]){
			for (int j = i * i; j < MAX_SIZE; j += i){
				prime[j] = 0;
			}
		}
	}

	for (int i = 1; i < MAX_SIZE; i++){
		prime[i] += prime[i - 1];
	}

	while (scanf("%d", &n) != EOF){
		printf("%d\n", prime[n]);
	}

	return (0);
}