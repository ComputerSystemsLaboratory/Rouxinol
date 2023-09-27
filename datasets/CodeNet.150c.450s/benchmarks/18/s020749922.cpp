#include <math.h>
#include <iostream>
#include <ios>
#include <iomanip>
#include <algorithm>
#include <functional>
#include <string>

#define YES "YES"
#define NO "NO"
#define space ' '

using namespace std;

void func();

int main(void)
{
	
	func();

	return 0;
}


void func()
{
	int n, debt;

	debt = 100000;

	cin >> n;
	while (n-- > 0)
	{
		debt = debt + debt*0.05;
		if (debt % 1000 > 0)
			debt += 1000 - debt % 1000;

		
	}
	cout << debt << endl;
}