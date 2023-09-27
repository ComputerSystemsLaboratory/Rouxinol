#include <iostream>
#include <string>

using namespace std;

int main()
{
	const string eot = "-";
	string w;
	while (cin >> w) {
		if (w == eot)
			break;

		unsigned int n;
		cin >> n;
		unsigned int s = 0;
		for (unsigned int i = 0; i < n; ++i) {
		    unsigned int l;
			cin >> l;
			s += l;
		}

		s = s % w.length();
		string ans = w.substr(s, string::npos);
		if (s > 0)
			ans += w.substr(0, s);
		cout << ans << endl;
	}
	return 0;
}

