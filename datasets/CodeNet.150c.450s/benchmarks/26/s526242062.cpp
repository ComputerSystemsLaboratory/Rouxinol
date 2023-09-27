#include <iostream>
using namespace std;

void doStdOut(const char *str);

int main()
{
	int a = 0, b = 0;
	cin >> a >> b;

	if(a < b)
	{
		doStdOut("a < b");
	}
	else if(a > b)
	{
		doStdOut("a > b");
	}
	else
	{
		doStdOut("a == b");
	}
	return 0;
}

void doStdOut(const char *str){ cout << str << endl; }