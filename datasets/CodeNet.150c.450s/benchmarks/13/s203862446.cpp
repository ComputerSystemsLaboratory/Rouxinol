#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
	string s, p;
	cin >> s >> p;
	s.append(s);
	if (s.find(p) != string::npos)	
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}