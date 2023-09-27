#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, p;
	cin >> s;
	cin >> p;

	s += s;
	string::size_type idx = s.find(p);

	idx != string::npos ? cout << "Yes" << endl : cout << "No" << endl;

	return 0;
}