#include <iostream>
using namespace std;

void doStdOut(const char *str);

int main()
{
	int a = 0, b = 0, c = 0;
	cin >> a >> b >> c;

	if(a < b && b < c){ doStdOut("Yes"); }
	else{ doStdOut("No"); }

	return 0;
}

void doStdOut(const char *str){ cout << str << endl; }