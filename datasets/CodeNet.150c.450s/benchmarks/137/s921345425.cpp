#include <algorithm>
#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n;
	cin >> n;

	unordered_set<string> d;
	while (n--)
	{
		string cmd, s;
		cin >> cmd >> s;

		if (cmd == "insert") d.insert(s);
		else cout << (d.find(s) != d.end() ? "yes" : "no") << endl;
	}

	return 0;
}