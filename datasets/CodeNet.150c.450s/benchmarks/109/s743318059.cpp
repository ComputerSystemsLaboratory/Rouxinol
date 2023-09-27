#include<iostream>
#include<cstdio>
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
const ll key = 998244353;
int main() {
	int n;
	while (cin >> n, n) {
		string s, t; int tim[100000] = {};
		for (int i = 0; i < n; i++) {
			cin >> s >> t;
			int sta = 0; int las = 0;
			sta += 36000 * (s[0] - '0');
			sta += 3600 * (s[1] - '0');
			sta += 600 * (s[3] - '0');
			sta += 60 * (s[4] - '0');
			sta += 10 * (s[6] - '0');
			sta += s[7] - '0';
			las += 36000 * (t[0] - '0');
			las += 3600 * (t[1] - '0');
			las += 600 * (t[3] - '0');
			las += 60 * (t[4] - '0');
			las += 10 * (t[6] - '0');
			las += t[7] - '0';
			tim[sta+1]++;
			tim[las+1]--;
		}
		for (int i = 1; i < 100000; i++) {
			tim[i] += tim[i - 1];
		}
		int ma = 0;
		for (int i = 0; i < 100000; i++) {
			ma = max(ma, tim[i]);
		}
		cout << ma << endl;
	}
	return 0;
}
