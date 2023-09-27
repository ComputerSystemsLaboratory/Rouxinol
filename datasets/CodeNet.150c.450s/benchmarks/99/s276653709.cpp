#include <bits/stdc++.h>
using namespace std;

string enc(int x)
{
	string s;
	if(x/1000>1) s.push_back(char(x/1000 + '0'));
	if(x/1000) s.push_back('m');
	x %= 1000;
	if(x/100>1) s.push_back(char(x/100 + '0'));
	if(x/100) s.push_back('c');
	x %= 100;
	if(x/10>1) s.push_back(char(x/10 + '0'));
	if(x/10) s.push_back('x');
	x %= 10;
	if(x>1) s.push_back(char(x + '0'));
	if(x) s.push_back('i');
	return s;
}

int dec(string s)
{
	int sum = 0;
	string::iterator itr = s.begin();
	while(itr != s.end())
	{
		int factor = 1;
		if(*itr >= '2' && *itr <= '9') factor = *itr++ - '0';
		switch(*itr++)
		{
			case 'm': factor *= 10;
			case 'c': factor *= 10;
			case 'x': factor *= 10;
		}
		sum += factor;
	}
	return sum;
}

int main()
{
	int n;
	cin >> n;
	while(n--)
	{
		string s1, s2;
		cin >> s1 >> s2;
		cout << enc(dec(s1) + dec(s2)) << endl;
	}
	return 0;
}