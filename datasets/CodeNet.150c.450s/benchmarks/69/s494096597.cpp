#include<iostream>
#include<vector>

using namespace std;


bool tansaku(vector<int> list,int index,int b,int c)
{
	if (index<10)
	{
		if (b < list[index])
		{
			if (tansaku(list, index + 1, list[index], c))
				return true;
		}
		if (c < list[index])
		{
			if (tansaku(list, index + 1, b, list[index]))
				return true;
		}
	}
	else
	{
		return true;
	}
	return false;
}
int main()
{
	vector<int> s(10);
	int b;

	cin >> b;
	for (int i = 0; i < b; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cin >> s[j];
		}
		if (tansaku(s, 0, 0, 0))
		{
			cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}

	return 0;
}