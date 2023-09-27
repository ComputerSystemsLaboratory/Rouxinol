#include <iostream>
#include <string>

using namespace std;

int main()
{
	string s;
	string p;

	cin >> s >> p;
	string s2 = s + s;
	cout << (s2.find(p) == string::npos ? "No" : "Yes") << endl;
	
	return 0;
}