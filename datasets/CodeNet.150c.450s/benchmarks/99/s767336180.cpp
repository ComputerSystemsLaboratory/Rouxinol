#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void solve()
{
	int n;
	cin >> n;
	while(n--)
	{
		int num1 = 0;
		int num2 = 0;
		string str1, str2;
		cin >> str1 >> str2;
		int temp = 1;
		for(int i = 0; i < str1.size(); ++i)
		{
			switch(str1[i])
			{
			case 'm': num1 += temp * 1000; temp = 1; break;
			case 'c': num1 += temp * 100; temp = 1; break;
			case 'x': num1 += temp * 10; temp = 1; break;
			case 'i': num1 += temp; temp = 1; break;
			default: temp = str1[i] - '0'; break;
			}
		}
		for(int i = 0; i < str2.size(); ++i)
		{
			switch(str2[i])
			{
			case 'm': num2 += temp * 1000; temp = 1; break;
			case 'c': num2 += temp * 100; temp = 1; break;
			case 'x': num2 += temp * 10; temp = 1; break;
			case 'i': num2 += temp; temp = 1; break;
			default: temp = str2[i] - '0'; break;
			}
		}
		int sum = num1 + num2;
		string str;

		char a;
		if(sum)
		{
			a = sum % 10 + '0';
			if('1' <= a && a <= '9')
			{
				str.push_back('i');
			}
			if(a != '1' && a!= '0')
				str.push_back(a);
			sum /= 10;
		}

		if(sum)
		{
			a = sum % 10 + '0';
			if('1' <= a && a <= '9')
			{
				str.push_back('x');
			}
			if(a != '1' && a!= '0')
				str.push_back(a);
			sum /= 10;
		}

		if(sum)
		{
			a = sum % 10 + '0';
			if('1' <= a && a <= '9')
			{
				str.push_back('c');
			}
			if(a != '1' && a!= '0')
				str.push_back(a);
			sum /= 10;
		}

		if(sum)
		{
			a = sum % 10 + '0';
			if('1' <= a && a <= '9')
			{
				str.push_back('m');
			}
			if(a != '1' && a!= '0')
				str.push_back(a);
		}
		reverse(str.begin(), str.end());
		cout << str << endl;
	}
}

int main()
{
	solve();
	return(0);
}