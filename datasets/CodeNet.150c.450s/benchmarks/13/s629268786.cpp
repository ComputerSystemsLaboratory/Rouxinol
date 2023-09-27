#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s, p;
	cin >> s >> p;
	s += s;
	auto found = s.find(p);

	if (found != std::string::npos)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}

	return 0;
}