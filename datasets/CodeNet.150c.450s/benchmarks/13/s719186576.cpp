#include <iostream>

using namespace std;

int main()
{
	string s, p;
	cin >> s >> p;

	for (int i = 0; i < s.length(); i++)
	{
		if (s.find(p) != string::npos) {
			cout << "Yes" << endl;
			return 0;
		}
		s = s.substr(1) + s[0];
	}
	cout << "No" << endl;
}