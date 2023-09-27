#define _USE_MATH_DEFINES
#include <iostream>
#include <vector>
#include <math.h>
#include <string>
#include <string.h>
#include <stack>
#include <algorithm>
#include <stdio.h>
#include <functional>
#include <iomanip>
using namespace std;

//??°?????????????????°

void function()
{
	//??¢??°
}

int main()
{
	char c;
	bool f = false;
	while (true)
	{
		scanf("%c", &c);
		if (isupper(c))
		{
			cout << (char)tolower(c);
		}
		else if (islower(c))
		{
			cout << (char)toupper(c);
		}
		else
		{
			cout << (char)c;
		}

		if (c == '\n') break;
	}
	return 0;
}