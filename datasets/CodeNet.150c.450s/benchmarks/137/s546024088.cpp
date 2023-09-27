#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	string str;
	set<string> dic;
	ios::sync_with_stdio(false);
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> str;
		if (str == "insert") {
			cin >> str;
			dic.insert(str);
		}
		else if (str == "find") {
			cin >> str;
			cout << (dic.find(str) != dic.end() ? "yes" : "no") << endl;
		}
	}
	return 0;
}