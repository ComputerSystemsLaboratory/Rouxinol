#include <iostream>
#include <utility>
#include <vector>
using namespace std;

int main()
{
	int n, m;
	char ch;
	while (cin >> n, n) {
		vector< pair<char, char> > v(n);
		for (int i = 0; i < n; i++) {
			cin >> v[i].first >> v[i].second;
		}
		cin >> m;
		string str;
		str.reserve(m);
		for (int i = 0; i < m; i++) {
			cin >> ch;
			for (int j = 0; j < v.size(); j++) {
				if (ch == v[j].first) {
					ch = v[j].second;
					break;
				}
			}
			str += ch;
		}
		cout << str << endl;
	}
	return 0;
}