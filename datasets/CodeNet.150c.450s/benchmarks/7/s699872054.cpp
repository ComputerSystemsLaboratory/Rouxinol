#include<iostream>
#include <list>
using std::cout;
using std::cin;
using std::endl;
int main()
{
	short t = 10;
	int a;
	std::list<int> v;
	while (t --)
	{
		cin >> a;
		v.push_back(a);
	}
	v.sort();
	std::list<int>::const_iterator le = v.end();
	t = 3;
	while (t--)
	{
		--le;
		cout << *le << endl;
	}
	return 0;
}