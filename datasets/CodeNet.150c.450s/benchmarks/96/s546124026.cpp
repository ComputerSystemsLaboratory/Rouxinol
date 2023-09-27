#include "iostream"
#include "climits"
#include "list"
#include "queue"
#include "stack"
#include "set"
#include "functional"
#include "algorithm"
#include "math.h"
#include "utility"
#include "string"
#include "map"
#include "unordered_map"
#include "iomanip"
#include "random"

using namespace std;
const long long int MOD = 1000000007;

long long int power(long long int x, long long int n, long long int M) {
	long long int tmp = 1;

	if (n > 0) {
		tmp = power(x, n / 2, M);
		if (n % 2 == 0) tmp = (tmp*tmp) % M;
		else tmp = (((tmp*tmp) % M)*x) % M;
	}
	return tmp;
}

long long int N, M, K, Q, W, H, L, R;
long long int ans;

using namespace std;


int main() {
	ios::sync_with_stdio(false);
	string s[10] = { "",".,!? ","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };
	cin >> N;
	for (int i = 0; i < N; i++) {
		string t;
		string ret;
		cin >> t;
		int box = 0;
		int bag = 0;
		for (auto j : t) {
			if (j == '0') {
				if (box) {
					ret += s[bag][(box - 1) % s[bag].size()];
				}
				box = 0;
			}
			else {
				if (bag == (int)(j - '0'))box++;
				else {
					bag = j - '0';
					box = 1;
				}
			}
		}
		cout << ret << endl;
	}
	return 0;
}