#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;


int main() {
	int n, m;
	char key, val;
	vector<string> dst;
	while (true)
	{
		map<char, char> keymap;
		cin >> n;
		if (n == 0)break;
		while (n-- > 0) {
			cin >> key >> val;
			keymap[key] = val;
		}
		cin >> m;
		string newstr;
		while (m-- > 0) {
			cin >> key;
			newstr+=((keymap.find(key) != keymap.end() ? keymap[key] : key));
		}
		dst.push_back(newstr);
	}
	for (vector<string >::iterator it = dst.begin(); it < dst.end(); it++)
		cout << (*it) << endl;
	return 0;
}
