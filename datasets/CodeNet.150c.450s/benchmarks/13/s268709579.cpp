#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{	
	int flag = 0;
	string s, p;
	cin >> s >> p;
	string t = s + s;
	for (int i = 0;i < t.length();++i) {
		if (t.substr(i, p.length()) == p) flag = 1;
	}
	if (flag) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}