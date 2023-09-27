#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;

#define rep(i,x,y) for(int (i)=(x);i<(y);(i)++)

string rev(string str) {
	string s;
	if (str.size() == 1) {
		return str;
	}
	for (int i = str.size() - 1; i >= 0; i--) {
		s += str.substr(i, 1);
	}

	return s;
}

int main()
{
	int n;
	cin >> n;
	rep(i, 0, n) {
		map<string, int> m;
		string str;
		cin >> str;
		m[str] = 1;

		rep(j, 1, str.size()) {
			string str1 = str.substr(0, j);
			string str2 = str.substr(j, str.size() - j);
			bool flag = true;

			m[str2 + str1] = 1;
			m[rev(str1) + str2] = 1;
			m[rev(str2) + str1] = 1;
			m[str1 + rev(str2)] = 1;
			m[str2 + rev(str1)] = 1;
			m[rev(str1) + rev(str2)] = 1;
			m[rev(str2) + rev(str1)] = 1;
		}

		cout << m.size() << endl;
	}

	return 0;
}