#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;
int main()
{
	int counter[200],m;
	memset(counter, 0, sizeof(counter));
	int i;
	while (cin >> i)
		counter[i]++;
	for (int i = 0; i < 200; i++)
		m = max(counter[i], m);
	for (int i = 0; i < 200; i++)
	{
		if (counter[i] == m)
			cout << i << endl;
	}
}