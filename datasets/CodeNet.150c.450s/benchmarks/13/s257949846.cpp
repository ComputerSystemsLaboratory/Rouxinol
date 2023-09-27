#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>


using namespace std;


int main()
{
	string s, p;

	cin >> s;
	cin >> p;

	s += s;

	if (s.find(p) == string::npos)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;

		return 0;
}