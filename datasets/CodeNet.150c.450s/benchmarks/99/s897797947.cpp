#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int dec(string s)
{
	int ret=0,d=1;
	for(int i=0; i<s.size(); i++)
	{
		if(isdigit(s[i])) d=s[i]-'0';
		else
		{
			if(s[i]=='m') ret+=d*1000;
			if(s[i]=='c') ret+=d*100;
			if(s[i]=='x') ret+=d*10;
			if(s[i]=='i') ret+=d*1;

			d=1;

		}
	}
	return ret;
}

void enc(int a)
{
	char dig[]={'i','x','c','m'};
	string s;

	for(int i=0; i<4; i++)
	{
		int d=a%10;
		if(d!=0)
		{
			s+=dig[i];
			if(d!=1) s+=(char)(d+'0');
		}

		a/=10;
	}
	
	reverse(s.begin(), s.end());
	cout << s << endl;
}

int main()
{
	int N;
	cin >> N;

	while(N--)
	{
		string a,b;
		cin >> a >> b;
		enc(dec(a)+dec(b));
	}

}