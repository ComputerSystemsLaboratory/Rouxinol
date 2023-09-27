#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	while (cin >> s) {
		if (s =="-")
			break;
		int m;
		cin >> m;
		for (int i = 0; i < m; i++) {
			int n;
			cin >> n;
			string s2;
			for (int j = 0; j < n; j++) {
				s2 += s[j];
			}
			s.erase(s.begin() , s.begin() + n);
			s = s + s2;
		}
		cout << s << endl;
	}
	return 0;
}