//Bokan ga bokka--nn!!
//Daily Lunch Special Tanoshii !!
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <string>
#include <algorithm>
#include <vector>
#include <queue>
#include <stack>
#include <functional>
#include <iostream>
#include <map>
#include <set>
using namespace std;
typedef pair<int,int> P;
typedef pair<int,P> P1;
typedef pair<P,P> P2;
typedef long long ll;
#define pu push
#define pb push_back
#define mp make_pair
#define eps 1e-7
#define INF 2000000000
#define s(x) scanf("%d",&x)
#define rep(i,x) for(int i=0;i<x;i++)
int main()
{
while(1)
{
	int n,k;
	scanf("%d %d",&n,&k);
	if(!n) return 0;
	int ret=-INF;
	int res=0;
	queue<int>que;
	for(int i=0;i<k;i++)
	{
		int s; scanf("%d",&s);
		res+=s;
		que.push(s);
	}
	ret=max(ret,res);
	for(int i=k;i<n;i++)
	{
		int s; scanf("%d",&s);
		res+=s;
		res-=(que.front());
		ret=max(ret,res);
		que.pop();
		que.push(s);
	}
	printf("%d\n",ret);
}
}