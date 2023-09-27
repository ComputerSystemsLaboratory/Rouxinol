#include <iostream>
#include <string>
#include <vector>
#include <stdio.h>
using namespace std;
#define D
#ifdef D
bool inc3(int n)
{
	while (n)
	{
		if ( n % 10== 3)
			return true;
		n /= 10;
	}
	return false;
}

int main(void)
{
	int n;
	cin >> n;
	n++;
	for (size_t i = 3; i < n; i++)
	{
		if (i % 3 == 0 || inc3(i))
			cout << " " << i;
	}
	cout << endl;
	return 0;
}

#endif // D