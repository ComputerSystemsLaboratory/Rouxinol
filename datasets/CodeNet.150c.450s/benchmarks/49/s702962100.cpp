#include <iostream>
#include <cstdio>
#include <vector>
#include <cmath>
#include <cstring>
#include <algorithm>
#include <functional>
#include <array>
#include <map>
using namespace std;

typedef vector<int> Ivec;
int main() {
	int n;
	
	while (scanf("%d", &n) != EOF) {
		if (n == 0)
			return 0;
		int Sum = 0, Max = -1, Min = 1001, num[2];
		for (int i = 0; n > i; i++) {
			int buf;
			scanf("%d", &buf);
			if (buf > Max) {
				Max = buf;
				num[0] = i;
			}
			if (buf < Min) {
				Min = buf;
				num[1] = i;
			}
			Sum += buf;
		}
		printf("%d\n", (int)((Sum - (num[0] == num[1] ? Max : Max+Min))/(n- (num[0] != num[1]) - 1)));
	}
	return 0;
} 