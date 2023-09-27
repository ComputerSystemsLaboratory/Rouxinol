#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <set>

using namespace std;

string rev(string s) {
	reverse(s.begin(), s.end());
	return s;
}

int main()
{
	int m;
	cin >> m;

	for (int data_i = 0; data_i < m; ++data_i) {
		string s;
		cin >> s;

		set<string> t;

		for (int i = 0; i < s.size() - 1; ++i) {
			string s1 = s.substr(0, i + 1);
			string s2 = s.substr(i + 1, s.size() - i);
			string temp;

			t.emplace(s1 + s2);
			t.emplace(rev(s1) + s2);
			t.emplace(s1 + rev(s2));
			t.emplace(rev(s1) + rev(s2));

			t.emplace(s2 + s1);
			t.emplace(rev(s2) + s1);
			t.emplace(s2 + rev(s1));
			t.emplace(rev(s2) + rev(s1));
		}

		cout << t.size() << endl;
	}

	return 0;
}