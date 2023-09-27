#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(void)
{
	int x, y;
	vector<string> v;
	while (1)
	{
		cin >> x >> y;
		if (x == 0&&y==0)break;
		else if (x > y)v.push_back(to_string(y) + " " + to_string(x));
		else v.push_back(to_string(x) + " " + to_string(y));
	}
	for (string s : v)
	{
		cout << s << endl;
	}
}
