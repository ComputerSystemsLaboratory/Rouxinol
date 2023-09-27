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

int main()
{

	while (1)
	{
		char ch[1000];
		char* pch;
		pch = ch;
		memset(ch, 0, sizeof(ch));

		string x;
		cin >> x;
		if (x == "0")break;
		
		strcpy(ch, x.c_str());
		int sum = 0;
		int index = 0;
		while (*pch)
		{
			sum += (*pch - 0x30);
			pch++;
		}
		cout << sum << endl;
	}

	return 0;
}