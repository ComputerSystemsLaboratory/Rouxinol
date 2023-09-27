#define _CRT_SECURE_NO_WARNINGS
#include <iostream>  
#include <stdio.h>  
#include <string>
#include <string.h>
#include <stdlib.h>  
#include <math.h>  
#include <queue>  
#include <stack>
#include <set>
#include <map>  
#include <vector>  
#include <algorithm>
#include <time.h>
#define ms(a) memset(a,0,sizeof(a)) 
#define inf 0x3f3f3f3f
#define MAX 100010
#define MX 10010
#define ll long long
using namespace std;
int a[MAX], par[MAX];
int findpar(int x)//直到最?属于的集合
{
	if (x != par[x])par[x] = findpar(par[x]);
	return par[x];
}
int main()
{
	int t, n, m, o, x, y, z;
	cin >> n >> m;
	bool oper;
	for (int i = 0; i < n; i++)
	{
		par[i] = i;//初始化各自?一个集合
	}
	for (int i = 0; i < m; i++)
	{
		cin >> oper >> x >> y;
		if (!oper){
			x = findpar(x);//得集合?
			y = findpar(y);
			//算法?化
			if (a[x]>a[y])par[y] = x;//小集合跟上大集合
			else{
				par[x] = y;
				if (a[x] == a[y])a[y]++;
			}
		}
		else printf(findpar(x) == findpar(y) ? "1\n" : "0\n");
	}
	return 0;
}