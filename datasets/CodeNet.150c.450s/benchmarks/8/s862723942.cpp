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
	int n; cin >> n;
	int taro = 0, hanako = 0;
	for (int i = 0; i < n; i++) {
		string s, t; cin >> s >> t;
		if (s == t) {
			taro++;
			hanako++;
		}
		else if (s > t) {
			taro += 3;
		}
		else {
			hanako += 3;
		}
	}
	cout << taro << " " << hanako << endl;


	return 0;
}