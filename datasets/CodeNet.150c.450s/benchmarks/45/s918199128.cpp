# include <iostream>
# include <algorithm>
# include <vector>
# include <string>
# include <set>
# include <map>
# include <cmath>
# include <iomanip>
# include <functional>
# include <utility>
# include <stack>
# include <queue>
# include <list>
constexpr int MOD = 1000000007;
constexpr int INF = 2000000000;
using namespace std;


//m^n%MOD
unsigned long long power(unsigned long long x, unsigned long long n, unsigned long long M) {
	unsigned long res = 1;
	if (n > 0) {
		res = power(x, n / 2, M);
		if (n % 2 == 0)res = (res*res) % M;
		else res = (((res*res) % M)*x) % M;
	}
	return res;
}


int main() {
	int m, n;
	cin >> m >> n;
	cout << power(m, n, MOD) << endl;
}