#include <iostream>
#include <iomanip>
#define _USE_MATH_DEFINES
#include <math.h>
#include <string>
#include <stdio.h>
#include <sstream>


using namespace std;
void swap(int &a, int &b);

int main()
{
	// 探索する文字列
	string sstr;// = {};
	string Output[10];
	
	int tempcount = 0;
	while (true)
	{
		cin >> sstr;
		if (sstr == "-")
			break;
		int numOfShuffle;
		cin >> numOfShuffle;

		int tempnum;

		for (int i = 0; i < numOfShuffle; ++i)
		{
			cin >> tempnum;
			string stemp = sstr.substr(0, tempnum);
			sstr.erase(0, tempnum);
			sstr += stemp;

		}

		Output[tempcount] = sstr;
		tempcount++;

	}

	for (int i = 0; i < tempcount; ++i)
		cout << Output[i].c_str() << endl;

	return 0;
}


