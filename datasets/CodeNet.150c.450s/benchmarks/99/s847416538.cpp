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
#include <bitset>
#include <stack>
#include <cstdlib>
#include <unordered_map>
#define REP(i,n) for(int i = 0; n > i; i++)
#define MOD 1000000007
using namespace std;
typedef vector<int> Ivec;
typedef pair<int, int> pii;
typedef long long int ll;
char str[101];
map<char, char> kako = { { '(',')' },{ '[',']' } };

int main() {
	int n;
	map<char, int> mo = { { 'm',1000 },{ 'c', 100 },{ 'x', 10 },{ 'i',1 } };
	array<char, 4> om = { 'm','c','x','i' };
	scanf("%d", &n);

	REP(i, n) {
		char s[9], s2[9];

		scanf("%s %s", s, s2);
		int n = 1;
		int a = 0;
		REP(j, strlen(s)) {
			if (s[j] <= '9') n = s[j] - '0';
			else {
				a += n * mo[s[j]];
				n = 1;
			}
		}
		REP(j, strlen(s2)) {
			if (s2[j] <= '9') n = s2[j] - '0';
			else {
				a += n * mo[s2[j]];
				n = 1;
			}
		}

		REP(j, 4) {
			n = a / mo[om[j]];
			a -= n*mo[om[j]];
			if (n == 1) printf("%c", om[j]);
			else if (n)printf("%d%c", n, om[j]);
		}
		printf("\n");
	}

	return 0;
}