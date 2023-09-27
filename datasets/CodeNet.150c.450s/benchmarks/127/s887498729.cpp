#include <iostream>
#include <string>
#include <set>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[]) {
	int m;
	string train, s1, s2;
	set<string> ts;

	cin >> m;
	for (int i = 0; i < m; ++i) {
		cin >> train;
		ts.clear();
		for (int j = 1; j < train.size(); ++j) {
			s1 = train.substr(0, j);
			s2 = train.substr(j, train.size());
			ts.insert(s1 + s2);
			ts.insert(s2 + s1);
			reverse(s2.begin(), s2.end());
			ts.insert(s1 + s2);
			ts.insert(s2 + s1);
			reverse(s1.begin(), s1.end());
			ts.insert(s1 + s2);
			ts.insert(s2 + s1);
			reverse(s2.begin(), s2.end());
			ts.insert(s1 + s2);
			ts.insert(s2 + s1);
		}

		cout << ts.size() << endl;
	}

	return 0;
}