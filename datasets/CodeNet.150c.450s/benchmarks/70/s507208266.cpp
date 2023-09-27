#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <cstring>
#include <string>
#include <vector>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <algorithm>
#include <functional>

using namespace std;

const char *dates[] = {
	"Monday",
	"Tuesday",
	"Wednesday",
	"Thursday",
	"Friday",
	"Saturday",
	"Sunday"
};

const int dateOfMonth[] = { 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

int main()
{
	int month, day, date;

	while ( true )
	{
		date = 2;

		cin >> month >> day;

		if ( month == 0 )
		{
			break;
		}

		for ( int i = 0; i < month - 1; i++ )
		{
			date += dateOfMonth[i];
		}

		date += day;

		cout << dates[ date % 7 ] << endl;
	}

	return 0;
}