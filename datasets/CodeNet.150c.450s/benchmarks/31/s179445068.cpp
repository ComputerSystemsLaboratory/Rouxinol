#include <stdio.h>
#include <vector>
#include <limits>
#include <algorithm>

/*
??????
*/


int main() {
	int n;
	std::vector<int> price;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		int b;
		scanf("%d", &b);
		price.push_back(b);
	}

	int pmin = std::numeric_limits<int>::max();
	int maxprofit = std::numeric_limits<int>::min();
	for (auto p = price.begin(); p != price.end(); p++) {
		maxprofit = std::max(maxprofit, *p - pmin);
		pmin = std::min(pmin, *p);
	}

	printf("%d\n", maxprofit);
}