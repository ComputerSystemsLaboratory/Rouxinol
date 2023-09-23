#include <iostream>
#include <cstdio>
#include <string>
#include <stack>
#include <queue>
#include <set>
#include <cmath>
#include <algorithm>

using namespace std;

#define MAX 1000000

int main(void) {
	bool isprime[MAX] = {false};

	for(int i = 3; i < MAX; i += 2) {
		isprime[i] = true;
	}
	isprime[2] = true;
	for(int i = 3; i * i <= MAX; i += 2) {
		if(!isprime[i]) continue;
		for(int j = i * i; j < MAX; j += i) {
			isprime[j] = false;
		}
	}
	
	while(1) {
		int a, d, n;
		int p_count = 0;
		scanf("%d %d %d", &a, &d, &n);
		if(!n) break;
		for(int i = a; i < MAX; i += d) {
			if(!isprime[i]) continue;
			p_count++;
			if(p_count == n) {
				printf("%d\n", i);
				break;
			}
		}
	}

	return 0;
}