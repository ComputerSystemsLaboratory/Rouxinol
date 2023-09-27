#include<cstdio>
#include<vector>
#include<algorithm>
#include<utility>
#include<numeric>
#include<iostream>
#include<array>
#include<string>
#define _USE_MATH_DEFINES

#include<math.h>
#include<unordered_map>

#define min(a,b) (a)>(b)?(b):(a)
#define max(a,b) (a)>(b)?(a):(b)

using namespace std;

int main()
{
	const string s1 = "12651";//3
	const string s2 = "15621";//4
	const string s3 = "53245";//6
	const string s4 = "54235";//1
	const string s5 = "13641";//5
	const string s6 = "14631";//2

	int a[6];
	int n;
	vector<int> ans;

	for (int i = 0; i < 6; i++)
	{
		cin >> a[i];
	}

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		int t, f;
		cin >> t >> f;

		string input;
		
		for (int i = 0; i < 6; i++)
		{
			if (a[i] == t)
			{
				input += to_string(i + 1);
			}
		}
		for (int i = 0; i < 6; i++)
		{
			if (a[i] == f)
			{
				input += to_string(i + 1);
			}
		}
		
		if (s1.find(input) != string::npos)
		{
			ans.push_back(2);
		}
		if (s2.find(input) != string::npos)
		{
			ans.push_back(3);
		}
		if (s3.find(input) != string::npos)
		{
			ans.push_back(5);
		}
		if (s4.find(input) != string::npos)
		{
			ans.push_back(0);
		}
		if (s5.find(input) != string::npos)
		{
			ans.push_back(4);
		}
		if (s6.find(input) != string::npos)
		{
			ans.push_back(1);
		}
	}

	for (auto& n : ans)
	{
		cout << a[n] << endl;
	}

	return 0;
}