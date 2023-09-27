#include<iostream>
#include<iomanip>
#include<algorithm>
#include<bitset>
#include<cctype>
#include<climits>
#include<cmath>
#include<cstdio>
#include<deque>
#include<list>
#include<map>
#include<set>
#include<stack>
#include<string>
#include<sstream>
#include<queue>
#include<vector>
using namespace std;

int main() {

	for (string s; cin >> s&&s!="0";) {
		int a = 0;
		for (int i = 0; i < s.size(); i++) {
			a += s[i] - '0';
		}
		cout << a << endl;
	}

	return 0;
}