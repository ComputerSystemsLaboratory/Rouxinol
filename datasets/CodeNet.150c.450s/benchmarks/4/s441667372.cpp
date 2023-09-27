#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
#include <stdio.h>
#include <cstring>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <numeric>

//#include <map>

using namespace std;

class CSet
{
	int mm, mf, mr;
	char chRank;

	void calcRank()
	{
		int sum = 0;
		sum = mm + mf;
		if (mm == -1 || mf == -1)
		{
			chRank = 'F';
		}
		else if (sum >= 80)
		{
			chRank = 'A';
		}
		else if (sum >= 65)
		{
			chRank = 'B';
		}
		else if (sum >= 50)
		{
			chRank = 'C';
		}
		else if (sum >= 30)
		{
			if (mr >= 50)
			{
				chRank = 'C';
			}
			else
			{
				chRank = 'D';
			}
		}
		else
		{
			chRank = 'F';
		}
	}

public:

	CSet(int m, int f, int r) 
	{
		mm = m; mf = f; mr = r;
		calcRank();
	}

	char getRank()
	{
		return chRank;
	}
};

int main()
{
	vector<CSet> vs;

	while (1)
	{
		int m, f, r;
		cin >> m >> f >> r;
		if (m == -1 && f == -1 && r == -1)break;
		CSet set(m, f, r);
		vs.push_back(set);
	}

	for (int i = 0; i < vs.size(); i++)
	{
		cout << vs.at(i).getRank() << endl;
	}

	return 0;
}