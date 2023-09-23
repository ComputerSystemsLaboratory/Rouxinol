// 0030.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//
#include<stdio.h>
#include <algorithm>
#include <cassert>
#include <cctype>
#include <climits>
#include <cmath>
#include <complex>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#include <map>     
#include <numeric>
#include <queue>
#include <set>
#include <sstream>
#include <iomanip>
#include <stack>
#include <string>
#include <vector>
using namespace std;
#define ll long long
#define ld long double
#define roop(a,t) for(int a=0;a<t;a++) 
int bit(int n, int s, int now)
{
	if (s < 0) { return 0; }
	if ((s != 0 || n != 0) && now == 10)
	{
		return 0;
	}
	if (s == 0 && n == 0 && now == 10)
	{
		return 1;
	}
	return bit(n - 1, s - now, now + 1) + bit(n, s, now + 1);
}
int main()
{
	
	cin.tie(0);
	ios::sync_with_stdio(false);
	int n, s;
	while (true) {
		cin >> n >> s;
		if (n == s&&n == 0) { break; }
		//vector<int>a;
		cout <<bit(n,s,0) << endl;
	}
	return 0;
}

