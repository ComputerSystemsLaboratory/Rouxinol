#include<iostream>
#include<list>
#include<iterator>
using namespace std;

int erase_alt(list<int> &lis, list<int>::iterator itr)
{
	int temp = *itr;
	lis.erase(itr);
	return temp;
}

int main()
{
	while (true)
	{
		list<int> list0;
		int n, r;
		cin >> n >> r;
		if (n == 0 && r == 0)break;
		for (int i=n; i > 0; i--)
		{
			list0.push_back(i);
		}
		for (int i = 0; i<r; i++)
		{
			int p, c;
			list<int>::iterator itr = list0.begin();
			cin >> p >> c;
			if (p == 1)continue;
			advance(itr, p - 1);
			list0.splice(list0.begin(), list0, itr, next(itr, c));

		}
		cout << *list0.begin() << endl;
	}
	return 0;
}