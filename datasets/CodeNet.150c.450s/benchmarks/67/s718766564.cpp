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
#include <queue>
using namespace std;

#define Getsign(n) ((n > 0) - (n < 0))

typedef vector<int> Ivec;
typedef pair<int, int> Pos;

int main() {
	int n;
	
	while (scanf("%d", &n)) {
		if (!n)
			return 0;

		int cou = 0;
		for (int i = 1; n > i; i++) {
			for (int j = i + 1; n >= j; j++) {
				if ((i + j)*(j - i + 1) / 2 == n)cou++;
			}
		}
		printf("%d\n", cou);
	}




	return 0;
}