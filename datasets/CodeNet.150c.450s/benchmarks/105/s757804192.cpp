#include<stdio.h>
#include<vector>
#include<algorithm>
#include<string>
#include<iostream>
using namespace std;
typedef long long ll;
ll conv(vector<ll>v, ll t)
{
	for (int i = 0; i < v.size(); i++)
	{
		if ((v[i] ^ t) < t && (v[i] ^ t) < v[i])t ^= v[i];
	}
	return t;
}
ll d[222];
int main()
{
	int data;
	scanf("%d", &data);
	for (int p = 0; p < data; p++)
	{
		int num;
		scanf("%d", &num);
		for (int i = 0; i < num; i++)scanf("%lld", &d[i]);
		string s;
		cin >> s;
		vector<ll>v;
		bool f = true;
		for (int i = s.size() - 1; i >= 0; i--)
		{
			//printf("----%lld\n", conv(v, d[i]));
			if (s[i] == '0')
			{
				ll z = conv(v, d[i]);
				if (z != 0)v.push_back(z);
			}
			else
			{
				ll z = conv(v, d[i]);
				if (z != 0)f = false;
			}
			sort(v.begin(), v.end());
			reverse(v.begin(), v.end());
			//for (int j = 0; j < v.size(); j++)printf("%lld ", v[j]); printf("---%d\n",f);
		}
		if (f)printf("0\n");
		else printf("1\n");
	}
}