#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s, p;
	cin >> s;
	cin >> p;

	s = s + s;

	int flag = 0;

	for (int i = 0; i < s.size() / 2; i++)
	{
		

		if (s.substr(i, p.size()) == p)
		{
			flag = 1;
		}
	}

	if (flag == 1) cout << "Yes" << endl;
	else cout << "No" << endl;

	return 0;
}