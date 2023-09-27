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
#include <map>
using namespace std;

int main()
{
	int cnt = 0;
	string w, t;

	cin >> w;
	for (int i = 0; i < w.length(); i++)
	{
		if (isupper(w[i]))
		{
			w[i] = tolower(w[i]);
		}
	}
	while (cin >> t)
	{
		if (t == "END_OF_TEXT")
		{
			break;
		}

		for (int i = 0; i < t.length(); i++)
		{
			if (isupper(t[i]))
			{
				t[i] = tolower(t[i]);
			}
		}

		if (t == w)
		{
			cnt++;
		}
	}

	cout << cnt << endl;

	return 0;
}