#include<iostream>
#include<string>
#include<list>


using namespace std;


int toNum(const string & str)
{
	int tmp = 1;
	int rtn = 0;

	for (const auto & c : str)
	{
		if (c == 'm')
		{
			rtn += 1000 * tmp;
			tmp = 1;
		}
		else if (c == 'c')
		{
			rtn += 100 * tmp;
			tmp = 1;
		}
		else if (c == 'x')
		{
			rtn += 10 * tmp;
			tmp = 1;
		}
		else if (c == 'i')
		{
			rtn += tmp;
			tmp = 1;
		}
		else
		{
			tmp = (int)(c - '0');
		}
	}
	return rtn;
}


void printNum(int num)
{
	list<int> lst;
	for (; num != 0; num /= 10)
	{
		lst.emplace_front(num % 10);
	}

	string keta = "ixcm";

	while (!lst.empty())
	{
		if (lst.front() > 1)
		{
			cout << lst.front();
		}
		if (lst.front() > 0)
		{
			cout << keta[lst.size() - 1];
		}
		lst.pop_front();
	}
	cout << endl;
}


int main()
{
	int n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{
		string s1, s2;
		cin >> s1 >> s2;

		printNum(toNum(s1) + toNum(s2));
	}
	return 0;
}
