#include<iostream>
#include<string>
#include<vector>
#include<cmath>
#include<algorithm>
#include<functional>
#include<iomanip>
#include<queue>
#include<ciso646>
#include<random>
#include<map>
#include<set>
using namespace std;
typedef long long ll;
const ll MOD = 1000000007;
const ll INF = (ll)1000000007 * 1000000007;
const double PI = 3.14159265358979;
const double E = 2.718281828459045;
const double root2 = sqrt(2);
typedef pair<int, int> P;
typedef unsigned int ui;
int main() {
	int isprime[1000001];
	fill(isprime, isprime + 1000001, 1);
  isprime[1]=0;
	for (int i = 2; i < 1000001; i++) {
		if (isprime[i] == 1) {
			for (int j = 2 * i; j < 1000001; j += i) {
				isprime[j] = 0;
			}
		}
	}
	int a, d, n;
	while (cin >> a >> d >> n) {
		if (n == 0)break;
		int count = 0; int i;
		for (i = a; count < n; i += d) {
			if (isprime[i] == 1)count++;
		}
		cout << i - d << endl;
	}
	return 0;
}

