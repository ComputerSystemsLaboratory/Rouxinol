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
	int a[26] = { 0 };

	while (cin >> c)
	{
		if (isupper(c)) c = tolower(c);

		if ((int)'a' <= (int)c && (int)c <= (int)'z')
		{
			a[(int)c - (int)'a']++;
		}
	}

	for (int i = 0; i < 26; i++)
	{
		cout << (char)(i + (int)'a') << " : " << a[i] << endl;
	}
	return 0;
}