#define _USE_MATH_DEFINES
#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<cmath>
#include<list>
#include<stack>
#include<queue>
#include<cctype>
#include<iomanip>
#include<functional>
#include<numeric>
#include<map>
#include<set>
#define EPS 1e-10
using namespace std;
typedef long long llong;
int main() {
	map<string, int>a;
	int len = 0, freq = 0;
	string s;
	while (cin>>s) {
		a[s]++;
		if (len < s.length())len = s.length();
		if (freq < a[s])freq = a[s];
	}
	for (auto it = a.begin(); it != a.end(); it++) {
		if (freq == it->second)cout << it->first << " ";
	}
	for (map<string, int>::iterator it = a.begin(); it != a.end(); it++) {
		if (len == it->first.length())cout << it->first << endl;
	}
	return 0;
}