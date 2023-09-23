#include <iostream>
#include <algorithm>
#include<vector>

using namespace std;
int main()
{
	ios::sync_with_stdio(false);
	int a, b, c, d = 0;
	cin >> a >> b >> c;
	for (int i = a; i < b+1; i++)
	{
		if (c % i == 0) d++;
	}
	cout << d << endl;
	return 0;
}