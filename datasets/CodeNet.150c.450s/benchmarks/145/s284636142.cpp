#include <iostream>
#include <set>
#include <string>
using namespace std;

int main()
{
	string t;
	multiset<string> d;
	while (cin >> t)
	{
		d.insert(t);
	}

	t = *(d.begin());
	multiset<string>::iterator it;
	for (it=++d.begin(); it!=d.end(); it++)
	{
		if (d.count(t) < d.count(*it)) t = *it;
	}
	cout << t << ' ';

	t = *(d.begin());
	for (it=++d.begin(); it!=d.end(); it++)
	{
		if (t.size() < it->size()) t = *it;
	}
	cout << t << endl;

	return 0;
}