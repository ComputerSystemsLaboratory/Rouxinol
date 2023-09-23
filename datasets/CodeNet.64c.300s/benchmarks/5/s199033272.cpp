
/* vo01.cpp */
#include <iostream>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
	int hills[10];

	for (int i = 0; i < 10; ++i)
		cin >> hills[i];

	sort(hills, hills + 10, greater<int>());

	for (int i = 0; i < 3; ++i)
		cout << hills[i] << '\n';

	return 0;
}