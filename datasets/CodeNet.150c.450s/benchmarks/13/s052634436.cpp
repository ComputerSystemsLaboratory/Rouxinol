#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define D

#ifdef D
int main(void)
{
	string s;
	string p;
	cin >> s;
	cin >> p;
	for (size_t i = 0; i < p.size(); i++)
	{
		if (i != 0)
			s = s.substr(1) + s[0];

		size_t num = s.find(p);
		if (num != string::npos) {
			cout << "Yes" << endl;
			return 0;
		}

	}
	cout << "No" << endl;
	return 0;

}
#endif