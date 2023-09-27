#include <iostream>
#include <algorithm>
#include <string>
#include <stack>
#include <queue>
#include <set>

using namespace std;

int main()
{
	while (1)
	{
		int a = 0;
		int b = 0;
		cin >> a;
		cin >> b;
		if (a == 0)break;
		if (a == 2)b += 31;
		if (a == 3)b += 31 + 29;
		if (a == 4)b += 60 + 31;
		if (a == 5)b += 91 + 30;
		if (a == 6)b += 121 + 31;
		if (a == 7)b += 152 + 30;
		if (a == 8)b += 182 + 31;
		if (a == 9)b += 213 + 31;
		if (a == 10)b += 30 + 244;
		if (a == 11)b += 31 + 274;
		if (a == 12)b += 30 + 305;
		if (b % 7 == 1)cout << "Thursday" << endl;
		if (b % 7 == 2)cout << "Friday" << endl;
		if (b % 7 == 3)cout << "Saturday" << endl;
		if (b % 7 == 4)cout << "Sunday" << endl;
		if (b % 7 == 5)cout << "Monday" << endl;
		if (b % 7 == 6)cout << "Tuesday" << endl;
		if (b % 7 == 0)cout << "Wednesday" << endl;
	}
	return 0;
}