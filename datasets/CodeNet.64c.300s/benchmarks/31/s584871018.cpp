#include <iostream>
#include <algorithm>
#include<iomanip>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	int s[31] = {};
	for (int i = 0; i<28; i++)
	{
		int h;
		cin >> h;
		s[h] = 1;
	}
	for (int i = 1; i<31; i++)
	{
		if (s[i] == 0)cout << i << endl;
	}
	cin >> s[0];
	return 0;
}