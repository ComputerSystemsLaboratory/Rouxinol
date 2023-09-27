#include <iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<sstream>
using namespace std;

int sstoi(char a)
{
	stringstream ss;
	ss<<a;
	int b;
	ss>>b;
	return b;
}

int main() {
	string s;
	while(cin>>s&&s!="0")
	{
		int sum=0;
		for(int i=0;i<s.length();i++)
		{
			sum+=sstoi(s[i]);
		}
		cout<<sum<<endl;
	}
	return 0;
}