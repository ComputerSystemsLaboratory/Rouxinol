#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main()
{
	string s, s2, s3;
	int m, n;

	while (true) {
		cin >> s;
		if (s == "-") break;
		cin >> m;
		for (int j = 0; j < m; j++) {
			cin >> n;

			s2 = s[n];
			for (int i = n + 1; i < s.length(); i++) {
				s2 += s[i];
			}
			for (int i = 0; i < n; i++) {
				s2 += s[i];
			}
			s = s2;
		}
		cout << s << "\n";
	}
}