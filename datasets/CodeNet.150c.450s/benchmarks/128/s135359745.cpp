#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
#include<sstream>
#include<iomanip>
#include<cstdlib>
#include<cmath>
#include<cstdio>
using namespace std;

int main()
{
	string s;
	cin >> s;
	for (int i = static_cast<int>(s.size()) - 1; i >= 0; i--)
	{
		cout << s[i];
	}
	cout << endl;
	return 0;
}