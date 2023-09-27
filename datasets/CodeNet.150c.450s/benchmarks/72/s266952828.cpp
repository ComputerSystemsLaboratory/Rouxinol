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
	char ch[1200];
	memset(ch, 0, sizeof(ch));

	string st;
	getline(cin, st);
	strcpy(ch, st.c_str());
	char* pch = ch;

	while ( *pch )
	{
		if (*pch >= 'a' && *pch <= 'z')
		{
			*pch -= 0x20;;
		}
		else if (*pch >= 'A' && *pch <= 'Z')
		{
			*pch += 0x20;
		}
		pch++;
	}

	cout << ch << endl;

	return 0;
}