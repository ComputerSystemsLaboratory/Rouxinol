#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s, p;
	
	cin >> s;
	cin >> p;
	
	string t = s + s.substr(0, p.size());
	//cout << t << endl;
	string::size_type loc = t.find(p, 0);
	if (loc != string::npos)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}