#include <vector>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;



int main()
{
	int n;
	while (cin >> n && n > 0)
	{
		vector<int> a = vector<int>(n);
		for (int i = 0; i < n; i++)
			cin >> a[i];

		vector<int> s = vector<int>(1, 0);
		bool f = true;
		bool plus = false;
		for (int i = 0; i < n; i++)
		{
			if (a[i] >= 0)
			{
				if (!f)
					f = true;
				if (!plus)
					plus = true;
				s[0] += a[i];
			}
			else if(s[0] > abs(a[i]))
			{
				if (f)
				{
					s.push_back(s[0]);
					f = false;
				}
				s[0] += a[i];
			}
			else
			{
				s[0] = 0;
			}

		}
		if (!plus)
		{
			int max = a[0];
			for (int i = 1; i < n; i++)
			{
				if (max < a[i])
					max = a[i];
			}
			cout << max << endl;
			continue;
		}
		for (int i = 1; i < s.size(); i++)
		{
			if (s[i] > s[0])
				s[0] = s[i];
		}
		cout << s[0] << endl;
	}

	return 0;
}