#include <iostream>
#include <stdio.h>
#include <string.h>
#include <functional>
#include <algorithm>
#include <string>

using namespace std;

int main (void)
{
	string s,p;
	
	cin >> s;
	cin >> p;
	
	s = s + s;
	
	if (s.find(p) == -1)
	{
		cout << "No" << endl;
	}else {
		cout << "Yes" << endl;
	}
}