#include <stdio.h>
#include <vector>
#include <algorithm>
#include <math.h>

bool isprime(int a) {
	if (a == 1) return false;

	for (int i = 2; i <= sqrt(a) ; i++) {
		if (a % i == 0) return false;
	}

	return true;
}

int main() {
	int n;
	std::vector<int> d;

	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		int b;
		scanf("%d", &b);
		d.push_back(b);
	}

	printf("%d\n", 
		std::count_if(d.begin(), d.end(),isprime));

	return 0;
}