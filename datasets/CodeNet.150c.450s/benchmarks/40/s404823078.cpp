#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
	vector<int> d(6);

	for (int i = 0; i < d.size(); ++i)
		cin >> skipws >> d[i];

	string s;
	cin >> s;

	for (int i = 0; i < s.size(); ++i)
		switch (s[i])
		{
		case 'N': swap(d[0], d[4]); swap(d[0], d[1]); swap(d[1], d[5]); break;
		case 'E': swap(d[0], d[3]); swap(d[3], d[5]); swap(d[5], d[2]); break;
		case 'S': swap(d[0], d[1]); swap(d[0], d[4]); swap(d[4], d[5]); break;
		case 'W': swap(d[0], d[2]); swap(d[2], d[5]); swap(d[5], d[3]); break;
		}

	cout << d[0] << endl;

	return 0;
}