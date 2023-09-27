#include <iostream>
#include <algorithm>
#include <math.h>
#include <cmath>
#include <stdio.h>
#include <string>
#include <string.h>
#include <cstring>
#include <sstream>
#include <iomanip>
#include <stdlib.h>

using namespace std;

int main (void)
{
	string a;

	cin >> a;
	int k = 0;
	k = a.size();

	for (int i = k; i > 0; i--)
	{
		cout << a.substr(i - 1,1);
	}
	cout << endl;
}
