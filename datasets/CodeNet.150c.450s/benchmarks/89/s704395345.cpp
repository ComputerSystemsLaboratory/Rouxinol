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
#define REP(i,n) for(int i = 0; n > i; i++)
#define MOD 1000000007
using namespace std;
typedef vector<int> Ivec;
typedef pair<int, int> pii;
typedef long long int ll;
int arr [50000000];
void Eratosthenes(int N) {//N?????§????´???°??¨
	for (int i = 0; i < N; i++) {
		arr[i] = 1;
	}
	for (int i = 2; i < sqrt(N); i++) {
		if (arr[i]) {
			for (int j = i * 2; j <= N; j += i) {
				arr[j] = 0;
			}
		}
	}

	int cou = 0;
	for (int i = 2; N > i; i++) {
		if (arr[i]) {
			arr[cou] = i;
			cou++;
		}
	}
}
int main() {
	Eratosthenes(1000000);

	int a, b,n;
	while (scanf("%d %d %d", &a, &b, &n)) {
		if (!a && !b && !n)
			return 0;

		int cou = 0;
		for(int i = 0; ; i++) {
			if (arr[i] - a < 0)continue;
			if (!((arr[i] - a) % b)) cou++;
			if (cou == n) {
				printf("%d\n", arr[i]);
				break;
			}
		}
	}

	return 0;
}