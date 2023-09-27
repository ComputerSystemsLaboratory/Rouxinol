#define _USE_MATH_DEFINES
#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <algorithm>
#include <stack>
#include <queue>
#include <vector>
#include <list>
#include <utility>
#include <numeric>

using namespace std;

int main()
{
	list<int> v;

	int n;
	for (cin >> n; n--;)
	{
		char c[20];
		int x;
		scanf("%s", c);

		string s = c;

		if (s == "insert")
		{
			scanf("%d", &x);
			v.push_front(x);
		}
		else if (s == "delete")
		{
			scanf("%d", &x);
			for (list<int>::iterator it = v.begin(); it != v.end(); it++)
			{
				if (*it == x)
				{
					v.erase(it);
					break;
				}
			}
		}
		else if (s == "deleteFirst")
		{
			v.pop_front();
		}
		else if (s == "deleteLast")
		{
			v.pop_back();
		}
	}

	bool space = false;
	for (list<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << (space ? " " : "");
		space = true;

		cout << *it;
	}

	cout << endl;
}
