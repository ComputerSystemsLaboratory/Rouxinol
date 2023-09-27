//#include<bits/stdc++.h>
#include<cstdio>
#include<cstring>
#include<algorithm>
#include<iostream>
#include<stdlib.h>
#include<queue>
#include<map>
#include<vector>
#include<cmath>
#include<fstream>
#include <set>
//freopen(".in","r",stdin);
//freopen(".out","w",stdout);
//freopen("input.txt","r",stdin);
//freopen("output.txt","w",stdout);
const int  MAXN =1e5+7;
const int mod = 1e14 ;
const long long INF = 0x7f7f7f7f7f7f7f7f;
const int inf= 0x3f3f3f3f;
#define eps 1e-8
#define PI 3.1415926535898
#define lowbit(x) (x&(-x))
using namespace std ;
//getline(cin,s);
//set<ll>::iterator it;
//map<int,int>::iterator it;
typedef long long ll;
char s[4][5]={"AC","WA","TLE","RE"};
int ans[4];
int main()
{
	int n;
	scanf("%d",&n);
	while(n--)
	{
		char a[5];
		scanf("%s",a);
		for(int i=0;i<4;i++)
		{
			if(strcmp(a,s[i])==0)
			{
				ans[i]++;
				break;
			}
		}
	}
	for(int i=0;i<4;i++)
	{
		printf("%s x %d\n",s[i],ans[i]);
	}
	return 0;
 } 