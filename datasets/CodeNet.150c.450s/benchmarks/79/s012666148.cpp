#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <numeric>
#include <algorithm>
#include <functional>
#include <array>
#include <map>
using namespace std;

typedef vector<int> Ivec;

int main() {
	int n, r;

	while (scanf("%d %d", &n, &r)) {
		if (n == 0) 
			return 0;

		Ivec fuda;
		for (int i = n; 0 < i; i--)
			fuda.push_back(i);

		int p, c;
		for (int i = 0; r > i; i++) {
			scanf("%d %d", &p, &c);
			Ivec buf(fuda);
			for (int j = 0; c > j; j++) {
				fuda.erase(fuda.begin()+p-1+j);
				fuda.insert(fuda.begin()+j, buf[p-1+j]);
			}
		}
		printf("%d\n", fuda[0]);
	}
	return 0;
}