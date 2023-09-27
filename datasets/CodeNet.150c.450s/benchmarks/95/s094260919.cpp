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
#include <limits.h>
#include <set>
#include <stack>

using namespace std;

#define Getsign(n) ((n > 0) - (n < 0))
#define QWERTYR(c) (c == 'y' || c == 'u' || (c >= 'h' && c <= 'p') ?	true : false)
map<string, int> roma_time = { { "I",1 },{ "II",2 },{ "III",3 },{ "IIII",4 },{ "V",5 },{ "VI",6 },{ "VII",7 },{ "VIII",8 },{ "IX",9 },{ "X",10 },{ "XI",11 },{ "XII",12 } };

typedef vector<int> Ivec;
typedef pair<int, int> pii;

int main() {
	int n;
	while (scanf("%d", &n)) {
		if (n == 0)
			return 0;
		char step[3];
		int cou = 0;
		bool l = 0, r = 0, stat = 0;
		for (int i = 0; n > i; i++) {
			scanf("%s", step);
			if (step[0] == 'r') {
				r = 1 - r;
			}
			else if (step[0] == 'l') {
				l = 1 - l;
			}
			if (l == r && stat != l) {
				cou++;
				stat = l;
			}
		}
		printf("%d\n", cou);
	}
	
	return 0;
}