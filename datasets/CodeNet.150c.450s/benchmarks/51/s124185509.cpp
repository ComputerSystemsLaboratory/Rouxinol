#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<int> a;
	for (int d = 1; d <= 30; d++)
	{
		a.insert(d);
	}
	for (int b = 0; b < 28; b++)
	{
		int c;
		cin >> c;
		a.erase(c);
	}
	set<int>::iterator it = a.begin();
	for (int g = 0; g < 2; g++)
	{
		cout << *it << endl;
		it++;
	}
	return 0;
}