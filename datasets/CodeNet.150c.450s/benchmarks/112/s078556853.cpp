#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main()
{
	int n;
	while (1)
	{
		cin >> n;
		if (n == 0)
			break;
		vector<char> check1(n), check2(n);
		for (int i = 0; i != n; ++i)
			cin >> check1[i] >> check2[i];
		int m;
		cin >> m;
		string str;
		for (int i = 0; i != m; ++i)
		{
			char c;
			cin >> c;
			for (int j = 0; j != n; ++j)
			{
				if (c == check1[j])
				{
					c = check2[j];
					break;
				}
			}
			str += c;
		}
		cout << str << endl;
	}
	return 0;
}