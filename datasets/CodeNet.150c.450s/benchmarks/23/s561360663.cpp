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
# include <bitset>
# include <complex>
# include <numeric>
using namespace std;
using LL = long long;
using ULL = unsigned long long;
constexpr long long MOD = 1000000000 + 7;
constexpr int INF = 2000000000;
constexpr int HINF = INF / 2;
constexpr double DINF = 100000000000000000.0;
constexpr long long LINF = 9000000000000000000;
const double PI = acos(-1);

int fib[50];
int main() {
	int n;
	cin >> n;
	fib[0] = 0;
	fib[1] = 1;
	if (n < 2) {
		cout << fib[n] << endl;
		return 0;
	}
	for (int i = 2; i <= n+1; i++) {
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	cout << fib[n+1] << endl;
}