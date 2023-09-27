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
	string in;
	cin >> in;

	for (int i = in.size(); i-- > 0;)
	{
		cout << in[i];
	}
	cout << endl;
}