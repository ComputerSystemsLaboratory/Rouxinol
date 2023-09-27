#include <iostream>
#include <unordered_set>

using namespace std;

int main()
{
	unordered_set<string> dict;

	int n;
	cin >> n;

	while (n--) {
		string op, str;
		cin >> op >> str;
		if (op.at(0) == 'i') {
			dict.insert(str);
		} else {
			cout << (dict.find(str) != dict.end() ? "yes" : "no") << endl;
		}
	}
	return 0;
}