#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <numeric>
#define rep(i, j) for(int i = 0; i < j; i++)
#define all(i) i.begin(), i.end()
using namespace std;
string valc = { "mcxi" };
string cnvstr(int num)
{
	string str;
	int dat[] = { (num - (num % 1000)) / 1000, (num % 1000 - num % 100) / 100,	
					  (num % 100 - num % 10) / 10, num % 10 };
	rep(i, 4)
	{
		if (dat[i] == 0) { continue; }
		else if (dat[i] == 1) { str.push_back(valc[i]); }
		else
		{
			str.push_back(dat[i] + '0');
			str.push_back(valc[i]);
		}
	}
	return str;
}
int cnvnum(string str)
{
	int vali[] = { 1000, 100, 10, 1 };
	int num = 0, tmp = 0, j = 0;
	rep(i, (int)str.size())
	{
		int val = valc.find(str[i]);
		if (val >= 0)
		{
			if (tmp > 0) { tmp *= vali[val]; }
			else { tmp += vali[val]; }
			j = 0;
		}
		else
		{
			tmp += str[i] - '0';
			j++;
		}
		if (j == 0) 
		{ 
			num += tmp;
			tmp = 0;
		}
	}
	return num;
}
int main()
{
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n; cin >> n;
	rep(i, n)
	{
		string str1, str2; cin >> str1 >> str2;
		cout << cnvstr(cnvnum(str1) + cnvnum(str2)) << "\n";
	}
}