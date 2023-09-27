#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <list>
#include <functional>
#include <algorithm>
#include <complex>
#include <map>
#include <cmath>
#include <string>
#include <cstdio>
#include <stdio.h>
#include <cstdlib>
#include <istream>



using namespace std;

//--------------------------------------------------------------//

char s;
int a = 0, k, L;
//s??\???????????????a?????¢??????k?????°???L?????¢???
stack<int> s1;
stack<pair<int, int> > s2;

int main() {
	for (int i = 0; cin >> s; i++) {
		if (s == '\\') {
			s1.push(i);
		}
		else if (s == '/'&& s1.size() > 0) {
			int j = s1.top(); s1.pop();
			a += i - j;
			int b = i - j;
			while (s2.size() > 0 && s2.top().first > j) {
				b += s2.top().second; s2.pop();
			}
			s2.push(make_pair(j, b));
		}
	}


	vector<int> ans;

	while (s2.size() > 0) {
		ans.push_back(s2.top().second);
		s2.pop();
	}
	reverse(ans.begin(), ans.end());

	cout << a << endl;

	cout << ans.size();
	for (int i = 0; i < ans.size(); i++) {
		cout << " " ;
		cout << ans[i];
	}
	cout << endl;
}