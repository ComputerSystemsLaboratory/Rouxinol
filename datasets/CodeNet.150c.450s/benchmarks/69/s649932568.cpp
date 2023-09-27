#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>
#include <cmath>
#include <algorithm>
#include <utility>
#include <vector>
#include <numeric>

using namespace std;

int main()
{
	int n;
	for (cin >> n; n--;)
	{
		vector<int> a(10);
		for (int i = 0; i < 10; i++)
		{
			cin >> a.at(i);
		}
		
		int idb = 0, idc = 0;
		bool b = true;
		for (int i = 0; i < a.size(); i++)
		{
			if (idb < a.at(i))
			{
				idb = a.at(i);
			}
			else if (idc < a.at(i))
			{
				idc = a.at(i);
			}
			else
			{
				b = false;
				break;
			}
		}


		cout << (b ? "YES" : "NO") << endl;
	}
}
