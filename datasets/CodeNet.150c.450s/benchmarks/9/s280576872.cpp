#include <iostream>
#include <iomanip>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>
#include <numeric>
#include <cmath>
#include <string.h>
#include <deque>
#define REP(i,j,n) for(int i=j;i<n;i++)
#define SORT(x) sort(x.begin(),x.end())

using namespace std;

int main() {
	string s;
	int n, h;
	for (;;) {
		cin >> s;
		if (s == "-") break;
		cin >> n;
		for (int i = 0; i < n; i++) {
			cin >> h;
			for (int j = 0; j < h; j++) {
				s.push_back(s[0]);
				s.erase(s.begin());
			}
		}
		cout << s << endl;
	}
	return 0;
}