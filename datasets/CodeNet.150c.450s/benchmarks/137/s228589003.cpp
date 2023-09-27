#include<iostream>
#include<stdio.h>
#include<string>
#include<sstream>

using namespace std;

const int M = 1046527;

string s[M];

int change(char c)
{
	if (c == 'A')return 1;
	else if (c == 'C')return 2;
	else if (c == 'G')return 3;
	else if (c == 'T')return 4;
	else return 0;
}

long long getkey(string str)
{
	long long sum = 0, p = 1;
	int i;
	for (i = 0; i < (int)str.length(); i++)
	{
		sum += p*change(str[i]);
		p *= 5;
	}
	return sum;
}

int h1(long long key) { return key % M; }
int h2(long long key) { return 1 + key % (M - 1); }

int find(string str)
{
	long long key, i = 0;
	int h;
	key = getkey(str);
	for (i = 0; i < M; i++)
	{
		h = (h1(key) + i * h2(key)) % M;
		if (s[h] == str)return 1;
		else if (s[h] == "N")return 0;
	}
	return 0;
}

void insert(string str)
{
	long long key, i;
	int h;
	key = getkey(str);
	for (i = 0; i < M; i++)
	{
		h = (h1(key) + i * h2(key)) % M;
		if (s[h] == str)return;
		else if (s[h] == "N")
		{
			s[h] = str;
			return;
		}
	}
}

int main()
{
	int n, i;
	char str[12], com[6];
	stringstream ans;
	for (i = 0; i < M; i++)s[i] = "N";
	cin >> n;
	for (i = 0; i < n; i++)
	{
		scanf("%s %s",com,str);
		if (com[0] == 'i')insert(str);
		else
		{
			if (find(str))ans << "yes" << endl;
			else ans << "no" << endl;
		}
	}
	cout << ans.str();
    return 0;
}