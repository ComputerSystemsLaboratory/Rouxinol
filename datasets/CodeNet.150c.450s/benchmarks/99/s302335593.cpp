#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <set>
#include <map>
#include <string>
#include <stack>
#include <queue>
#include <cmath>
#include <cstdio>
#include <istream>
#include <sstream>
#include <iomanip>
#include <iterator>
#include <climits>
using namespace std;

typedef ostringstream OSS;
typedef istringstream ISS;

typedef vector<int> VI;
typedef vector< VI > VVI;

typedef long long LL;

typedef pair<int, int> PII;
typedef vector<PII> VPII;

#define X first
#define Y second

const string MCXI_STR("mcxi");
const VI MCXI_NUM({1000, 100, 10, 1});

int decode(string s) {
	int res = 0;
	
	for (int i = 0; i < (int)s.size(); i++) {
		if (isalpha(s[i])) {
			res += MCXI_NUM[MCXI_STR.find(s[i])];
		} else {
			res += MCXI_NUM[MCXI_STR.find(s[i + 1])] * (s[i] - '0');
			i++;
		}
	}

	return res;
}

string encode(int n) {
	string res;

	for (int i = 0; i < (int)MCXI_NUM.size(); i++) {
		int k = n / MCXI_NUM[i];

		if (k > 1) {
			res += k + '0';
		}
		if (k) {
			res += MCXI_STR[i];
		}

		n %= MCXI_NUM[i];
	}

	return res;
}

int main(void) {
	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		string s1, s2;
		int n1, n2;
		
		cin >> s1 >> s2;

		n1 = decode(s1);
		n2 = decode(s2);

		cout << encode(n1 + n2) << endl;
	}

	return 0;
}