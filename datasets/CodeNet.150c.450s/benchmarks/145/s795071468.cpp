#include <iostream>
#include <string.h>
#include <vector>
#include <algorithm>
using namespace std;

typedef pair<string, int> P;

bool pairCompare(const P& firstElof, const P& secondElof)
{
	return firstElof.second > secondElof.second;
}

int main(void)
{
	string s, m;
	vector<P> v;
	while (cin >> s) {
		if (m.size() < s.size()) m = s;
		bool flag = true;
		for (int i = 0; i < v.size(); i++) {
			if (v[i].first == s) {
				flag = false;
				v[i].second++;
			}
		}
		if (flag) v.push_back(P(s,1));
	}
	sort(v.begin(), v.end(), pairCompare);
	cout << v[0].first << " " << m << endl;
	
	return 0;
}