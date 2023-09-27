#include <cstdio>
#include <iostream>
#include <string>
#include <sstream>
#include <stack>
#include <algorithm>
#include <cmath>
#include <queue>
#include <map>
#include <set>
#include <cstdlib>
#include <bitset>
#include <tuple>
#include <assert.h>
#include <deque>
#include <bitset>
#include <iomanip>
#include <limits>
#include <chrono>
#include <random>
#include <array>
#include <unordered_map>
#include <functional>
#include <complex>

template<class T> inline bool chmax(T& a, T b) { if (a < b) { a = b; return 1; } return 0; }
template<class T> inline bool chmin(T& a, T b) { if (a > b) { a = b; return 1; } return 0; }

constexpr long long MAX = 5100000;
constexpr long long INF = 1LL << 60;
constexpr int inf = 1 << 28;
//constexpr long long mod = 1000000007LL;
//constexpr long long mod = 998244353LL;

using namespace std;
typedef unsigned long long ull;
typedef long long ll;


int cnv(string& s) {
	int res = 0;
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == 'm') {
			if (i == 0 || (s[i-1] == 'm' || s[i-1] == 'c' || s[i-1]=='x' || s[i-1] == 'i') ) {
				res += 1000;
			}
			else {
				res += (s[i - 1] - '0') * 1000;
			}
		}
		if (s[i] == 'c') {
			if (i == 0 || (s[i - 1] == 'm' || s[i - 1] == 'c' || s[i - 1] == 'x' || s[i - 1] == 'i')) {
				res += 100;
			}
			else {
				res += (s[i - 1] - '0') * 100;
			}
		}
		if (s[i] == 'x') {
			if (i == 0 || (s[i - 1] == 'm' || s[i - 1] == 'c' || s[i - 1] == 'x' || s[i - 1] == 'i')) {
				res += 10;
			}
			else {
				res += (s[i - 1] - '0') * 10;
			}
		}
		if (s[i] == 'i') {
			if (i == 0 || (s[i - 1] == 'm' || s[i - 1] == 'c' || s[i - 1] == 'x' || s[i - 1] == 'i')) {
				res += 1;
			}
			else {
				res += (s[i - 1] - '0') * 1;
			}
		}
	}
	return res;
}

string recnv(int n) {
	string res;
	if (n >= 1000) {
		if(n/1000 >= 2) res += to_string(n / 1000);
		res += 'm';
		n %= 1000;
	}
	if (n >= 100) {
		if(n/100 >= 2) res += to_string(n / 100);
		res += 'c';
		n %= 100;
	}
	if (n >= 10) {
		if (n / 10 >= 2) res += to_string(n / 10);
		res += 'x';
		n %= 10;
	}
	if (n >= 1) {
		if (n / 1 >= 2) res += to_string(n / 1);
		res += 'i';
	}
	return res;
}
int main()
{
	/*
	cin.tie(nullptr);
	ios::sync_with_stdio(false);
	*/
	int kkt; scanf("%d", &kkt);
	while (kkt--) {
		string s1, s2; cin >> s1 >> s2;
		int ans = cnv(s1) + cnv(s2);
		cout << recnv(ans) << "\n";
	}
	return 0;

}
