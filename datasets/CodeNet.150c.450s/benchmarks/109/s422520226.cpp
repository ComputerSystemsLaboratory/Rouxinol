#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <algorithm>
#include <math.h>
#include <utility>
#include <string>
#include <ctype.h>
#include <cstring>
#include <cstdio>
#include <sstream>
#include <functional>

using namespace std;

#define FOR(i,k,n) for(int i = (k); i < (n); i++)
#define REP(i,n) FOR(i,0,n)
#define INF 114514810
#define ll long long
//#define scanf scanf_s

int main()
{
	int n;
	while(cin>>n,n)
	{
		vector<pair<int,int>> v;
		REP(i,n)
		{
			int a,b,c,t;
			scanf("%d:%d:%d",&a,&b,&c);
			t = 3600*a+60*b+c;
			v.push_back(make_pair(t,1));
			scanf("%d:%d:%d",&a,&b,&c);
			t = 3600*a+60*b+c;
			v.push_back(make_pair(t,-1));
		}
		sort(v.begin(),v.end());
		int cnt = 0;int train = 0;
		REP(i,2*n)
		{
		if(train==0&&v[i].second == 1)
		{
		cnt++;
		}
		else train-=v[i].second;
		}
		cout<<cnt<<endl;
	}
}