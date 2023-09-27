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
#include <regex>
#include <locale>
#include <fstream>
#include <stdlib.h>
#include <cctype>

//#include <map>

using namespace std;

int main()
{
	string W, T;
	getline(cin, W);

	while (1)
	{
		string st;
		getline(cin, st);
		if (st == "END_OF_TEXT")break;

		T += st + '\n';
	}

	string temp;
	int count = 0;

	for (int i = 0; i < W.size(); i++)
	{
		T.at(i) = tolower(T.at(i));
	}

	for (int i = 0; i < T.size(); i++)
	{
	if (T.at(i) != ' ' && T.at(i) != '.' && T.at(i) != '\n')
		{
			temp += tolower(T.at(i));
		}
		else
		{
			if (temp == W)
			{
				count++;
			}
			temp = "";
		}
	}

	cout << count << endl;

	return 0;
}