#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<stack>
#include<sstream>
#include<string>
#include<math.h>
using namespace std;

int main()
{
	int a, b;
	int x, y;
	cin >> x >> y;
	a = max(x, y);
	b = min(x, y);
	while (b)
	{
		int k = b;
		b = a%b;
		a = k;
	}
	cout << a << endl;
}