#include <iostream>
#include <iomanip>
#include <sstream>
#include <stdio.h>
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
	vector<int> v;
	REP(i, 5)
	{
		int tmp;
		cin >> tmp;
		v.push_back(tmp);
	}
	sort(v.begin(), v.end(), greater<int>());
	REP(i, 4) cout << v[i]<<" ";
	cout << v[4] << endl;
	return 0;
}