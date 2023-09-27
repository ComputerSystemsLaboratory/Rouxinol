#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <math.h>
#include <vector>
#include <string>
#include <sstream>

#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
#define ll long long

using namespace std;

string Num2Str(int num)
{
	stringstream ss;
	ss << num;
	return ss.str();
}

int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);

	int a, b;
	string s;
	// code
	while (cin >> a >> b)
	{
		s = Num2Str(a + b);
		cout << s.size() << endl;
	}

	return 0;
}