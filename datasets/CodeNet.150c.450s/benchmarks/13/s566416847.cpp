#include <iostream>
#include <string>
using namespace std;

int main() {
	string s, p;
	int mark = 0;

	cin >> s >> p;
	for (int i = 0; i < s.size(); i++)
	{
		if (mark)
			break;
		if (s.find(p, 0) != s.npos)
			mark = 1;
		char first;
		first = s[0];
		s.push_back(first);
		s.erase(0, 1);
	}

	if (mark)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}