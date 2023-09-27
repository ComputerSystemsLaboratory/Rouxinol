#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>

//#include <map>

using namespace std;

class data {
public:
	int a,b;
	char op;
};

int main()
{
	int a, b;
	char op;

	vector<data> vData;

	while (1)
	{
		cin >> a >> op >> b;
		if (op == '?')break;
		data d;
		d.a = a;
		d.op = op;
		d.b = b;
		vData.push_back(d);
	}

	int ans;

	for (int i = 0; i < vData.size(); i++)
	{
		a = vData.at(i).a;
		b = vData.at(i).b;

		switch (vData.at(i).op)
		{
			case '+':ans = a + b; break;
			case '-':ans = a - b; break;
			case '*':ans = a * b; break;
			case '/':ans = a / b; break;
			default:break;
		}
		cout << ans << endl;
	}

	return 0;
}