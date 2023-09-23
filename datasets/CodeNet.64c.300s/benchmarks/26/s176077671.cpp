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

typedef long long llong;
typedef unsigned long long ullong;

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

//?????§??¬?´???°
int gcd(int x, int y) {
	return y ? gcd(y, x%y) : x;
}

//???????´???? ??°??????????????????
llong mod_pow(ullong x, ullong n) {
	ullong res = 1;
	while (n > 0) {
		if (n & 1)res = res*x%MOD;
		x = x*x%MOD;
		n >>= 1;
	}
	return res;
}

int main() {
	ullong m, n; cin >> m >> n;
	cout << mod_pow(m, n) << endl;
	return 0;
}