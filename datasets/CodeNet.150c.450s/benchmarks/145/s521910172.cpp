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

// 1文字split 要sstream
vector<string> split(const string &str, char delim) {
	istringstream iss(str); string tmp; vector<string> res;
	while(getline(iss, tmp, delim)) res.push_back(tmp);
	return res;
}

int main(void) {
	string s;
	getline(cin, s);

	vector<string> ws = split(s, ' ');
	string max_len;
	
	map<string, int> ws_cnt;

	for (auto w : ws) {
		ws_cnt[w] = 0;
	}

	for (auto w : ws) {
		ws_cnt[w]++;
		if (max_len.size() < w.size()) {
			max_len = w;
		}
	}

	string max_cnt_str;
	int max_cnt = 0;
	for (auto m : ws_cnt) {
		if (max_cnt < m.second) {
			max_cnt = m.second;
			max_cnt_str = m.first;
		}
	}

	cout << max_cnt_str << " " << max_len << endl;
	
	return 0;
}