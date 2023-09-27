#include <iostream>
#include <cstdio>
#define _USE_MATH_DEFINES
#include <math.h>
#include <vector>
#include <string>
#include <ctype.h>

using namespace std;

void solve()
{
	string s, p;
	cin >> s >> p;
	s += s;
	if (s.find(p) != string::npos)
	{
		cout << "Yes" << endl;
	}
	else
	{
		cout << "No" << endl;
	}
}

int main()
{
	solve();
	return(0);
}