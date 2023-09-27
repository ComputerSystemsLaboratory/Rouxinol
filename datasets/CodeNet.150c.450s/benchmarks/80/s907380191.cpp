#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <queue>
#include <set>
using namespace std;
int main()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int f;
	int g;
	int h;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	cin >> e;
	cin >> f;
	cin >> g;
	cin >> h;
	if (a + b + c + d >= e + f + g + h)
	{
		cout << a + b + c + d << endl;
	}
	else
	{
		cout << e + f + g + h << endl;
	}
	return 0;
}