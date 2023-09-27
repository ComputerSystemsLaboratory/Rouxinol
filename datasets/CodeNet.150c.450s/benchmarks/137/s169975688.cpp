#include<iostream>
#include<string>
using namespace std;

const long long M = 1046527;
string Hash[M];

int getchar(char ch)
{
	if ('A' == ch)
		return 1;
	else if ('C' == ch)
		return 2;
	else if ('G' == ch)
		return 3;
	else if ('T' == ch)
		return 4;
	else
		return 0;
}
long long get_key(string str)
{
	long long sum = 0, p = 1, i;
	for (i = 0; i < str.length(); i++)
	{
		sum += p*getchar(str[i]);
		p *= 5;
	}
	return sum;
}

long long hash1(long long key)
{
	return key % M;
}
long long hash2(long long key)
{
	return 1 + (key%(M - 1));
}

bool find(string str)
{
	long long key, i, index;
	key = get_key(str);
	for (i = 0;; i++)
	{
		index = (hash1(key) + i*hash2(key)) % M; 
		if (i > M)
		{
			
			return 0;
		}
		else if (Hash[index]==str)
			return 1;
		else if (Hash[index].length() == 0)       
			return 0;
	}
	return 0;
}


void insert(string str)
{
	long long key, i, index;
	key = get_key(str);
	for (i = 0; ; i++)
	{
		index = (hash1(key) + i*hash2(key)) % M;
		if (i > M)
		{
			
			break;
		}
		else if (Hash[index].length() == 0)
		{
			Hash[index] = str;
			break;
		}
	}
}

int main()
{
	

	int n;
	cin >> n; 
	string commond;
	for (int i = 0; i < n; i++)
	{
		cin >> commond;
		if (commond == "insert")
		{
			cin >> commond;
			insert(commond);
		}
		else
		{
			cin >> commond;
			if (find(commond))
			{
				cout << "yes" << endl;
			}
			else
			{
				cout << "no" << endl;
			}
		}
	}
	return 0;
}