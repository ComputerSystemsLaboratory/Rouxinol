#include<iostream>
#include<cstdio>
#include<cmath>
#include<cstring>
#include<string>

using namespace std;

int INF = 10000000;

string memo[1000];
int memoMax = 0;

int setstr(string str)
{
	for(int i = 0;i < memoMax;i++)
	{
		if(str == memo[i] )return 0;
	}
	memo[memoMax++] = str;
	return 1;
}

string strrev(string str)
{
	for(int i = 0;i < str.length()/2;i++)
	{
		char c = str[i];
		str[i] = str[str.length() - i - 1]; 
		str[str.length() - i - 1] = c;
	}
	return str;
}


int cast(string str)
{
	int len = str.length();

	int sum = 0;
	sum+=setstr(str);

	for(int i = 1;i < len;i++)
	{
		string str1 = str.substr(0,i);
		string str2 = str.substr(i,len-i);


		sum+=setstr(str1+strrev(str2));
		sum+=setstr(strrev(str1)+str2);
		sum+=setstr(strrev(str1)+strrev(str2));

		sum+=setstr(str2+str1);
		sum+=setstr(str2+strrev(str1));
		sum+=setstr(strrev(str2)+str1);


	}

	sum+=setstr(strrev(str));

	memoMax = 0;

	return sum;
} 


int main()
{
	int m;
	string str;

	cin >> m;


	for(int i = 0;i < m;i++)
	{

		cin >> str;
 
	
		cout << cast(str) << endl;
	
	}

  return 0;
}