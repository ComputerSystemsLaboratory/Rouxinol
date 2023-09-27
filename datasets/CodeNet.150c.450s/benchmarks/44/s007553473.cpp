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
	vector<int> a(4);
	vector<int> b(4);

	string sa;
	for (; getline(cin, sa);)
	{
		stringstream ssa;
		ssa << sa;

		for (int i = 0; i < 4; i++)
		{
			ssa >> a.at(i);
		}

		string sb;
		getline(cin, sb);
		stringstream ssb;
		ssb << sb;

		int hit = 0;
		int blow = 0;
		for (int i = 0; i < 4; i++)
		{
			ssb >> b.at(i);
			if (a.at(i) == b.at(i))
			{
				hit++;
			}
		}

		sort(a.begin(), a.end());
		sort(b.begin(), b.end());

		for (int i = 0; i < 4; i++)
		{
			if (a.at(i) == b.at(i))
			{
				blow++;
			}
		}

		blow -= hit;
		if (blow < 0)
		{
			blow = 0;
		}

		cout << hit << " " << blow << endl;
	}
}

