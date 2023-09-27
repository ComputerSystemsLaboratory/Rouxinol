#include<iostream>
#include<map>
#include<string>
using namespace std;

string lowen(string str)
{
	for(int i=0; i<str.size(); i++)
	{
		if('A'<=str[i] && 'Z'>=str[i])
			str[i] += 'a'-'A';
	}
	return str;
}

int main(void)
{
	
	string str;
	int mode = 0;
	string modest = "";
	string longest = "";
	map<string,int> dic;

	while(cin >> str)
	{
		str = lowen(str);
		if(dic.count(str))
		{
			dic[str]++;
			if(mode < dic[str])
			{
				mode = dic[str];
				modest = str;
			}
		}
		else
		{
			dic.insert( map<string,int>::value_type(str,1) );
			if(longest.size() < str.size())
				longest = str;
		}
	}
	cout << modest << " " << longest << endl;
	return 0;
}