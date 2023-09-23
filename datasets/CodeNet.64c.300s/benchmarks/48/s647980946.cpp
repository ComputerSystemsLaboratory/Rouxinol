#include<iostream>
#include<iomanip>
#include<algorithm>
#include<cassert>
#include<cctype>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<functional>
#include<limits>
#include<list>
#include<map>
#include<numeric>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

#define MOD 1000000007
#define INF 0x3f3f3f3f
#define INFL 0x3f3f3f3f3f3f3f3fLL

#define MAX 999999

//?´???°??????
bool isPrime(int x) {
	if (x < 2)return 0;
	else if (x == 2)return 1;
	if (x % 2 == 0)return 0;
	for (int i = 3; i*i <= x; i += 2)
		if (x%i == 0)return 0;
	return 1;
}

//??¨????????????????????????
//n??\????????£??´??°????´???°???????????°???????????????is_prime[]???????´?
void eratos(int n, bool is_prime[]) {
	fill(is_prime, is_prime + n, true);
	is_prime[0] = is_prime[1] = false;
	for (int i = 2; i*i <= n; i++) {
		if (is_prime[i]) {
			int j = i + i;
			while (j <= n) {
				is_prime[j] = false;
				j = j + i;
			}
		}
	}
}

int main() {
	bool is_prime[MAX];
	eratos(MAX, is_prime);

	for (int n; cin >> n;) {
		int cnt = 0;
		for (int i = 0; i <= n; i++) {
			if (is_prime[i])cnt++;
		}
		cout << cnt << endl;;
	}
	return 0;
}