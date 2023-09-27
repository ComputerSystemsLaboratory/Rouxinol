#include <iostream>
#include <sstream>
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <numeric>
#include <ctype.h>
#include <cstdlib>
#include <string.h>
#include <cmath>
#include <cstdio>





using namespace std;


int main()
{
	string input, str;

	cin >> input;

	for (auto a : input)
	{
		str.insert(str.begin(), a);
	}

	cout << str << endl;
}