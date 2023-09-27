#include<iostream>
#include<string>
#include<cstdio>
#include<algorithm>
#include<cctype>
#include<cstdlib>
#include<vector>

using namespace std;

#define REP(i,n) for(int i = 0 ; i < n ; i++)
	

int conv_i(string s)
{
	int ret = 0;
	
	REP(i,s.size())
	{
		int n = 1;
		char tmp = s[i];
		if(isdigit(tmp))
		{
			n = tmp - '0';
			i++;
			tmp = s[i];
		}
		switch(tmp)
		{
			case 'm':ret += 1000 * n;break;
			case 'c':ret += 100 * n;break;
			case 'x':ret += 10 * n;break;
			case 'i':ret += n;break;
		}
	}
	
	return ret;
	
}

string conv_s(int n)
{
	int m,c,x,i;
	i = n % 10;
	n /= 10;x = n % 10;
	n /= 10;c = n % 10;
	n /= 10;m = n % 10;
	string ret;
	if(m)
	{
		if(m == 1)ret += 'm';
		else{char tmp = m + '0';ret += tmp ;ret += 'm';}
	}
	if(c)
	{
		if(c == 1)ret += 'c';
		else{char tmp = c + '0';ret += tmp ;ret += 'c';}
	}
	if(x)
	{
		if(x == 1)ret += 'x';
		else{char tmp = x + '0';ret += tmp ;ret += 'x';}
	}
	if(i)
	{
		if(i == 1)ret += 'i';
		else{char tmp = i + '0';ret += tmp ;ret += 'i';}
	}
	return ret;
}

int main()
{
	int n;
	cin >> n;

	REP(a,n)
	{
		string a1,a2,ret;
		int b1,b2,tmp;
		
		cin >> a1 >> a2;
		
		b1 = conv_i(a1);b2 = conv_i(a2);
		tmp = b1 + b2;
		ret = conv_s(tmp);
		
		cout << ret << endl;
		
	}
	return 0;
}