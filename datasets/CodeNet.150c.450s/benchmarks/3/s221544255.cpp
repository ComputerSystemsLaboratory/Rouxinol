#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string str, cmd, p;
	int q, a, b;

	cin >> str >> q;

	for (int i = 0; i < q; i++){
		cin >> cmd;
		if (cmd == "print"){
			cin >> a >> b;
			cout << str.substr(a, b - a + 1) << endl;
		}
		else if (cmd == "reverse"){
			cin >> a >> b;
			p = str.substr(a, b - a + 1);
			reverse(p.begin(), p.end());
			str.replace(a, p.length(), p);
		}
		else if (cmd == "replace"){
			cin >> a >> b >> p;
			str.replace(a, p.length(), p);
		}
	}

	return 0;
}