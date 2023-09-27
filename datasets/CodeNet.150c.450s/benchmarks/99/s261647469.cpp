#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <algorithm>
#include <utility>
#include <functional>
#include <cstring>
#include <queue>
#include <stack>
#include <math.h>
#include <iterator>
#include <vector>
#include <string>
#include <set>
#include <math.h>
#include <iostream>
#include <random>
#include<map>
#include <iomanip>
#include <time.h>
#include <stdlib.h>
#include <list>
#include <typeinfo>
#include <list>
#include <set>
#include <cassert>
#include<fstream>
#include <unordered_map>
#include <cstdlib>
#include <complex>
using namespace std;
#define Ma_PI 3.141592653589793
#define eps 0.00000001
#define LONG_INF 1e9
#define GOLD 1.61803398874989484820458
#define MAX_MOD 1000000007
#define MOD 998244353
#define REP(i,n) for(long long i = 0;i < n;++i)    
#define seg_size 524288
long long gcd(long long a, long long b) {
	if (b == 0) return a;
	return gcd(b, a % b);
}
int to_int(string s) {
	map<char, int> gogo;
	gogo['m'] = 1000;
	gogo['c'] = 100;
	gogo['x'] = 10;
	gogo['i'] = 1;
	int ans = 0;
	int now = 1;
	for (int i = 0; i < s.length(); ++i) {
		if (s[i] >= '2' && s[i] <= '9') {
			now = s[i] - '0';
		}
		else {
			ans += now * gogo[s[i]];
			now = 1;
		}
	}
	return ans;
}
string to_mcxi(int a) {
	string ans;
	map<int,char> gogo;
	gogo[1000] = 'm';
	gogo[100] = 'c';
	gogo[10] = 'x';
	gogo[1] = 'i';
	for (int i = 1000; i >= 1; i /= 10) {
		if (i <= a) {
			if (i*2 <= a) {
				ans.push_back((char)('0' + a / i));
			}
			ans.push_back(gogo[i]);
			a %= i;
		}
	}
	return ans;
}
int main() {
	int n;
	cin >> n;
	REP(i, n) {
		string a, b;
		cin >> a >> b;
		cout << to_mcxi(to_int(a) + to_int(b)) << endl;
	}
	return 0;
}
