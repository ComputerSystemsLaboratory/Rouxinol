#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
	string s;

	while (true) {
		unsigned int ans = 0;
		getline(cin, s);
		for (unsigned int i = 0; i < s.length(); ++i) {
			ans += s[i] - '0';
		}
		if (ans == 0) break;
		cout << ans << endl;
	}
	return 0;
}
