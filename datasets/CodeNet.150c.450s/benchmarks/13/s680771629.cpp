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
	string s, p;
	int count=0,q;
	bool judge = true;
	cin >> s >> p;
	for (int i = 0; i < s.length(); i++) {
		q = i;
		string s1;
		while (count < p.length()) {
			if (q > s.length()-1)q -= s.length();
			s1 += s[q];
			q++;
			count++;
		}
		count = 0;
		if (s1 == p) {
			judge = false;
			break;
		}
	}
	if (judge) cout << "No" << endl;
	else cout << "Yes" << endl;
	return 0;
}