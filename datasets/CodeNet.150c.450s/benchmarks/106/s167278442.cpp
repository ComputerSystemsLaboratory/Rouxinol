#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

int main(void)
{	

	int start, end, val, count = 0;
	cin >> start;
	cin >> end;
	cin >> val;

	for (int i = start; i < end + 1; i++)
	{
		if (val%i == 0)count++;

	}

	cout << count << endl;

}